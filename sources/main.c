/*
** EPITECH PROJECT, 2022
** Main
** File description:
** This function is the main of the menger sponge
*/

#include <stdbool.h>

void menger(int size, int level, int x, int y)
{
  size = size / 3;
  printf("%03d %03d %03d\n", size, x + size, y + size);
  if ((level > 1) && (size / 3) > 0)
    {
      level -= 1;
      menger(size, level, x, y);
      menger(size, level, x, y + size);
      menger(size, level, x, y + 2 * size);
      menger(size, level, x + size, y);
      menger(size, level, x + size, y + 2 * size);
      menger(size, level, x + 2 * size, y);
      menger(size, level, x + 2 * size, y + size);
      menger(size, level, x + 2 * size, y + 2 * size);
    }
}

int main(int ac, char **av)
{
    if (arguments_are_good(ac, av) == false) {
        return (84);
    }
    int size = my_getnbr(av[1]);
    int level = my_getnbr(av[2]);
    menger(size, level, 0, 0);
    return (0);
}