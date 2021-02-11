/*
** EPITECH PROJECT, 2021
** support_func
** File description:
** support_func
*/

#include "libmy.h"
#include "ant.h"

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

char **malloc_strarr(char **arr, char *str)
{
    int i = 0;

    arr = malloc(sizeof(char *) * (count_w(str) + 1));
    while (i < count_w(str)) {
        arr[i] = my_malloc(my_strlen(str));
        i++;
    }
    arr[i] = my_malloc(my_strlen(str));
    return (arr);
}

char **new_word(char **used, char *str, int *i_used)
{
    used[*i_used] = my_strdup(str);
    *i_used += 1;
    return (used);
}

void print_word(char **used, int *i_print)
{
    if (used[*i_print][0] != 0) {
        my_putstr(used[*i_print]);
        my_putchar('@');
        *i_print += 1;
    }
}