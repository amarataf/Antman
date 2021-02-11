/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** put two strings together
*/

int my_count(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int i = my_count(dest);
    int j = 0;

    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
