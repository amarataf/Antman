/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** compare two strings
*/

int compare_strings(char const *s1, char const *s2, int q)
{
    int i = 0;
    int k = 0;

    while (s1[i] != '\0') {
        i++;
    }
    i--;
    while (s2[k] != '\0') {
        k++;
    }
    k--;
    if (i > k) {
        q = i;
        return (q);
    } else {
        q = k;
        return (q);
    }
}

int my_strcmp(char const *s1, char const *s2)
{
    int j = 0;
    int q = 0;
    int dif = 0;

    q = compare_strings(s1, s2, q);
    while (j <= q) {
        if (s1[j] != s2[j]) {
            dif = s1[j] - s2[j];
            return (dif);
        }
        j++;
    }
    return (dif);
}
