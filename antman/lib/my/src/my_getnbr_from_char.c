/*
** EPITECH PROJECT, 2020
** my_getnbr_from_char
** File description:
** string to int
*/

int my_getnbr_from_char(char c)
{
    int len = 0;
    int p = 1;
    int nmb = 0;

    if (c >= '0' && c <= '9') {
        nmb = nmb * 10;
        nmb = nmb + c - '0';
        len++;
    } else {
        return (nmb * p);
    }
    return (0);
}
