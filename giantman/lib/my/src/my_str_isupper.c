/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** return 1 if the string given is only uppercase
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            i++;
        } else {
            return (0);
        }
    }
    return (1);
}
