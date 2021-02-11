/*
** EPITECH PROJECT, 2021
** replace_words
** File description:
** raplace words with its number
*/

#include <stdlib.h>
#include "libmy.h"

int *replace_words(char **w, char **used, int n)
{
    int *position = malloc(sizeof(int) * n);
    int i = 0;
    int j = 0;
    int i_pos = 0;

    while (i < n) {
        while (j < n) {
            if (my_strcmp(w[i], used[j]) == 0) {
                position[i_pos] = j + 1;
                i_pos++;
            }
            j++;
        }
        j  = 0;
        i++;
    }
    return (position);
}