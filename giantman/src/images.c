/*
** EPITECH PROJECT, 2021
** .c for images
** File description:
** images
*/

#include "giant.h"
#include "libmy.h"

char *reset_str(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        str[x] = '\0';
        x++;
    }
    return (str);
}

char *count_line(char *msg, int i, char *temp)
{
    int w = 0;

    temp = reset_str(temp);
    while (msg[i + w] != '\n' && msg[i + w] != '\0') {
        temp[w] = msg[i + w];
        w++;
    }
    return (temp);
}

void print_reps(char *str, char *s_num)
{
    int n = my_getnbr(str);

    if (my_strcmp(str, "no$str") == 0)
        n = 1;
    while (n > 0) {
        my_putstr(s_num);
        my_putstr("\n");
        n--;
    }
}

void decomp_image(char *msg, int i, int x, int w)
{
    char *str = my_malloc(10);
    char *s_num = my_malloc(4);
    char *temp = my_malloc(4);

    while (msg[i] != '\0') {
        str = reset_str(str);
        s_num = reset_str(s_num);
        temp = count_line(msg, i, temp);
        i = i + my_strlen(temp) + 1;
        x = 1;
        w = 0;
        if (temp[0] == '(') {
            while (temp[x] != ')')
                str[x++ - 1] = temp[x];
            while (temp[++x] != '\0')
                s_num[w++] = temp[x];
            print_reps(str, s_num);
        } else
            print_reps("no$str", temp);
    }
}