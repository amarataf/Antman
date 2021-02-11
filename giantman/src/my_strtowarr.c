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

char **my_str_to_word_array(char *str)
{
    char **result = malloc(sizeof(char *) * count_w(str));
    int a = 0;
    int b = 0;
    int c = 0;

    if (result == NULL)
        return (NULL);
    while (b <= (count_w(str) - 1)) {
        c = 0;
        while (is_check(str[a]) == 0)
            a++;
        result[b] = my_malloc(len_of_word(str, a) + 1);
        while (is_check(str[a]) == 1) {
            result[b][c] = str[a];
            a++;
            c++;
        }
        b++;
    }
    return (result);
}