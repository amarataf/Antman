/*
** EPITECH PROJECT, 2021
** giantman
** File description:
** principal giantman func
*/

#include "giant.h"
#include "libmy.h"

void print_anted(char *msg)
{
    my_putstr(msg);
}

char *decomp(char *msg, int num)
{
    if (num == 1)
        msg = decomp_song(msg);
    else if (num == 2)
        msg = decomp_html(msg);
    else
        decomp_image(msg, 0, 0, 0);
    return (msg);
}

int giantman(char *path, int num)
{
    char *msg = read_file(path);

    if (num < 1 || num > 3 || msg == NULL)
        return (84);
    msg = decomp(msg, num);
    return (0);
}