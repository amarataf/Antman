/*
** EPITECH PROJECT, 2021
** word_to_array
** File description:
** str word to array
*/

#include "ant.h"
#include "libmy.h"

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