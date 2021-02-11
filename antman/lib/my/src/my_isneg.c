/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** is n positive (P) or negative (N)
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else if (n < 0) {
        my_putchar('N');
    }
    return (0);
}
