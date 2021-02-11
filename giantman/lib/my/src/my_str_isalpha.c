/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** return 1 if str only contains alphabetical numbers
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            i++;
        } else {
            return (0);
        }
    }
    return (1);
}
