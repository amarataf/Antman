/*
** EPITECH PROJECT, 2021
** giantman
** File description:
** decompression
*/

#include "libmy.h"
#include "giant.h"

int main(int ac, char **av)
{
    if (ac != 3 || my_str_isnum(av[2]) == 0)
        return (84);
    return (giantman(av[1], av[2][0] - 48));
}