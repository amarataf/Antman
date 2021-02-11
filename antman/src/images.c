/*
** EPITECH PROJECT, 2021
** .c for images
** File description:
** images
*/

#include "ant.h"
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

int print_num(char *str, int max)
{
    if (str[0] != '\0') {
        if (max != 0) {
            my_putchar('(');
            my_put_nbr(max + 1);
            my_putchar(')');
        }
        my_putstr(str);
        my_putstr("\n");
    }
    return (0);
}

char *print_sent(char *temp, char *str)
{
    str = reset_str(str);
    my_putstr(temp);
    my_putstr("\n");
    return (str);
}

void comp_image(char *msg, int i, int x, int max)
{
    char *str = my_malloc(4);
    char *temp = my_malloc(4);

    while (msg[i] != '\0') {
        temp = count_line(msg, i, temp);
        i = i + my_strlen(temp) + 1;
        x = 0;
        if (my_strlen(temp) > 3 || my_str_isnum(temp) == 0) {
            max = print_num(str, max);
            str = print_sent(temp, str);
        } else if (my_strcmp(temp, str) == 0) {
            max++;
        } else {
            max = print_num(str, max);
            str = reset_str(str);
            while (temp[x] != '\0')
                str[x++] = temp[x];
        }
    }
    max = print_num(str, max);
}