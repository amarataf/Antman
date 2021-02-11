/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** search a string inside a bigger string
*/

int count_long_string(char *str, int c)
{
    while (str[c] != '\0') {
        c++;
    }
    return (c);
}

char *my_strstr(char *str, char const *to_find)
{
    int pos = 0;
    int c = 0;

    c = count_long_string(str, c);
    while (to_find[pos] != '\0') {
        if (str[pos] == str[c] && str[pos] != to_find[0]) {
            return ('\0');
        }
        if (to_find[pos] != str[pos]) {
            return (my_strstr(str + 1, to_find));
        }
        pos++;
    }
    return (str);
}
