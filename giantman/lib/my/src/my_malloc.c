/*
** EPITECH PROJECT, 2020
** my_malloc
** File description:
** fill spaces with \0
*/

#include <stdlib.h>
#include <stddef.h>

char *my_malloc(int size)
{
    int i = 0;
    char *str = malloc(sizeof(char) * size);

    if (str == NULL)
        return (NULL);
    while (i < size) {
        str[i] = '\0';
        i++;
    }
    return (str);
}
