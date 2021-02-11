/*
** EPITECH PROJECT, 2021
** antman
** File description:
** principal antman func
*/

#include "ant.h"
#include "libmy.h"

void print_anted(char *msg)
{
    my_putstr(msg);
}

char *compress(char *msg, int num)
{
    if (num == 1)
        msg = comp_song(msg);
    else if (num == 2)
        msg = comp_html(msg);
    else
        comp_image(msg, 0, 0, 0);
    return (msg);
}

int antman(char *path, int num)
{
    char *msg = read_file(path);

    if (num < 1 || num > 3 || msg == NULL)
        return (84);
    msg = compress(msg, num);
    return (0);
}