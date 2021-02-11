/*
** EPITECH PROJECT, 2021
** strtowarr
** File description:
** str to word array
*/

#include "giant.h"
#include "libmy.h"

int is_check(char w)
{
    if (w != '\0' && w != 32)
        return (1);
    else
        return (0);
}

int count_w(char *str)
{
    int i = 0;
    int w = 0;

    while (str[i] != '\0') {
        if (is_check(str[i]) == 1 && is_check(str[i + 1]) == 0)
            w++;
        i++;
    }
    return (w);
}

int len_of_word(char *str, int i)
{
    int len_of = 0;

    while (is_check(str[i]) == 1) {
        i++;
        len_of++;
    }
    return (len_of);
}

int isUsed(char *str, char **used, int nbr)
{
    int i = 0;

    while (i < nbr) {
        if (my_strcmp(str, used[i]) == 0)
            return (1);
        i++;
    }
    return (0);
}

char **new_word(char **used, char *str, int *i_used)
{
    used[*i_used] = my_strdup(str);
    *i_used += 1;
    return (used);
}