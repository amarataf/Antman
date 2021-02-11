/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swap two integers
*/

void my_swap(int *a, int *b)
{
    int temporal;

    temporal = *a;
    *a = *b;
    *b = temporal;
}
