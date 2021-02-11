/*
** EPITECH PROJECT, 2021
** word_to_array
** File description:
** str word to array
*/

#include "giant.h"
#include "libmy.h"

int check_sep(char w)
{
    if (w != '\0' && w != '@')
        return (1);
    else
        return (0);
}

int word_length(char *str, int i)
{
    int count = 0;

    while (str[i] != '\\') {
        count++;
        i++;
    }
    return (count);
}

void check_space(int *first_space)
{
    if (*first_space != 0) {
        my_putchar(32);
    } else
        *first_space = 1;
}

char **my_str_to_word_array(char *str)
{
    char **result = malloc(sizeof(char *) * count_words(str));
    int a = 0;
    int b = 0;
    int c = 0;

    if (result == NULL)
        return (NULL);
    while (b <= (count_words(str) - 1)) {
        c = 0;
        while (check_sep(str[a]) == 0)
            a++;
        result[b] = my_malloc(len_of_word(str, a) + 1);
        while (check_sep(str[a]) == 1) {
            result[b][c] = str[a];
            a++;
            c++;
        }
        b++;
    }
    return (result);
}