/*
** EPITECH PROJECT, 2021
** .c for song type
** File description:
** songs
*/

#include "ant.h"
#include "libmy.h"

void print_numbers(int *positions, int n)
{
    int i = 0;

    my_putstr(":\\");
    while (i < n) {
        if (positions[i] != 0) {
            my_put_nbr(positions[i]);
            my_putchar('\\');
        }
        i++;
    }
}

void compress_msg(char **w, char **used, char *msg, int *positions)
{
    int i = 0;
    int j = 0;
    int i_used = 0;
    int i_print = 0;
    int n = count_w(msg);

    w = my_str_to_word_array(msg);
    while (i < n) {
        while (j < n) {
            if (my_strcmp(w[i], w[j]) == 0 && isUsed(w[i], used, n) == 0)
                used = new_word(used, w[j], &i_used);
            j++;
        }
        print_word(used, &i_print);
        j = 0;
        i++;
    }
    positions = replace_words(w, used, n);
    print_numbers(positions, n);
}

char *comp_song(char *msg)
{
    char **w = malloc(sizeof(char *) * (count_w(msg)));
    char **used = malloc_strarr(used, msg);
    int *positions = malloc(sizeof(int) * (count_w(msg)));

    if (w == NULL || used == NULL || positions == NULL)
        return (NULL);
    compress_msg(w, used, msg, positions);
    return (msg);
}