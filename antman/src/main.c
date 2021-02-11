/*
** EPITECH PROJECT, 2021
** antman
** File description:
** remake of tcsh
*/

#include "libmy.h"
#include "ant.h"

int main(int ac, char **av)
{
    if (ac != 3 || my_str_isnum(av[2]) == 0)
        return (84);
    return (antman(av[1], av[2][0] - 48));
}