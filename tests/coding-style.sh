#!/bin/bash

function my_readlink() {
    cd $1
    pwd
    cd - > /dev/null
}

function cat_readme() {
    echo ""
    echo "Usage: ./coding-style.sh DELIVERY_DIR REPORTS_DIR"
    echo "       DELIVERY_DIR      Should be the directory where your project files are"
    echo "       REPORTS_DIR       Should be the directory where we output the reports"
    echo "                         Take note that existing reports will be overriden"
    echo ""
}

if [ $# == 1 ] && [ $1 == "--help" ]; then
    cat_readme
elif [ $# = 2 ];
then
    DELIVERY_DIR=$(my_readlink "$1")
    REPORTS_DIR=$(my_readlink "$2")
    EXPORT_FILE="$REPORTS_DIR"/coding-style-reports.log
    ### delete existing report file
    rm -f "$EXPORT_FILE"

    ### Pull new version of docker image and clean olds
    sudo docker pull ghcr.io/epitech/coding-style-checker:latest -q && sudo docker image prune -f

    ### generate reports
    sudo docker run --rm -i -v "$DELIVERY_DIR":"/mnt/delivery" -v "$REPORTS_DIR":"/mnt/reports" ghcr.io/epitech/coding-style-checker:latest "/mnt/delivery" "/mnt/reports"
    ## echo no error if no report file
    echo "----------------- Report ---------------------"
    # add color to the output of the report
    echo -e "\033[31mMajor errors : $(grep -c ": MAJOR:" "$EXPORT_FILE") | \033[33mMinor errors : $(grep -c ": MINOR:" "$EXPORT_FILE") | \033[32mInfo : $(grep -c ": INFO:" "$EXPORT_FILE")\033[0m"
    echo "----------------------------------------------"
    ### rename report file with the folder name
    rm -f "$REPORTS_DIR"/coding-style-reports-"$(basename "$DELIVERY_DIR")".log
    mv "$EXPORT_FILE" "$REPORTS_DIR"/coding-style-reports-"$(basename "$DELIVERY_DIR")".log
else
    cat_readme
fi
