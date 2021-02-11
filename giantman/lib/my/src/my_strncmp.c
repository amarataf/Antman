/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** compare two strings till the number given
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int pos = 0;

    while (s1[pos] == s2[pos] && s1[pos] && s2[pos] && pos < n) {
        pos++;
    }
    if ((s1[pos] == '\0' && s2[pos] == '\0') || pos == n) {
        return (0);
    }
    if (s1[pos] > s2[pos]) {
        return (32);
    } else {
        return (-32);
    }
}
