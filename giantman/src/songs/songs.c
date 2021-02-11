/*
** EPITECH PROJECT, 2021
** .c for song type
** File description:
** songs
*/

#include "giant.h"
#include "libmy.h"

int print_string(char *str, int i, char **used)
{
    char *number;
    int i_number = 0;
    int first_space = 0;

    while (str[i] != '\0') {
        if (str[i] == '\\' && str[i + 1] != '\0') {
            i++;
            number = my_malloc(word_length(str, i));
            while (str[i] != '\\') {
                number[i_number] = str[i];
                i_number++;
                i++;
            }
            i--;
            i_number = 0;
            check_space(&first_space);
            my_putstr(used[my_getnbr(number) - 1]);
        }
        i++;
    }
}

int count_words(char *str)
{
    int i = 0;
    int w = 0;

    while (str[i] != '\0') {
        if (check_sep(str[i]) == 1 && check_sep(str[i + 1]) == 0)
            w++;
        i++;
    }
    return (w - 1);
}

char **malloc_strarr(char **arr, char *str)
{
    int i = 0;

    arr = malloc(sizeof(char *) * (count_words(str) + 1));
    while (i < count_words(str)) {
        arr[i] = my_malloc(my_strlen(str));
        i++;
    }
    arr[i] = my_malloc(my_strlen(str));
    return (arr);
}

char **get_array(char *msg)
{
    char **w = malloc(sizeof(char *) * (count_words(msg)));
    char **used = malloc_strarr(used, msg);
    int *positions = malloc(sizeof(int) * (count_words(msg)));
    int i = 0;
    int j = 0;
    int i_used = 0;
    int n = count_words(msg);

    w = my_str_to_word_array(msg);
    while (i < n) {
        while (j < n) {
            if (my_strcmp(w[i], w[j]) == 0 && isUsed(w[i], used, n) == 0)
                used = new_word(used, w[j], &i_used);
            j++;
        }
        j = 0;
        i++;
    }
    return (used);
}

char *decomp_song(char *msg)
{
    int i = 0;
    char **used = malloc_strarr(used, msg);
    used = get_array(msg);

    while (i < my_strlen(msg) - 1) {
        if (msg[i] == '@' && msg[i + 1] == ':')
            print_string(msg, i, used);
        i++;
    }
    return (msg);
}