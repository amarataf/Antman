/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    char temp;
    int i = 0;
    int c = 0;

    while (str[c] != '\0') {
        c++;
    }
    c--;
    while (i < c) {
        temp = str[i];
        str[i] = str[c];
        str[c] = temp;
        i++;
        c--;
    }
    return (str);
}
