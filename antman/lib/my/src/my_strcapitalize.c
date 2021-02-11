/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** capitalize the first letter of every word
*/

char *my_strcapitalize(char *str)
{
    int i = 0;
    int d = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i++;
    }
    i = 0;
    while (str[i] != '\0') {
        d = i - 1;
        if (str[i] >= 97 && str[i] <= 122 && str[d] <= 47 && str[d] >= 0)
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
