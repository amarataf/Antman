/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** convert all chars to uppercase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
