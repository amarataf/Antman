/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** put together n characters of two different strings
*/

int my_count_two(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_count_two(dest);
    int j = 0;

    while (j <= nb) {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + nb] = '\0';
    return (dest);
}
