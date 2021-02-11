/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** calculate the power of any number
*/

int show_error(int nb)
{
    if (nb == 0) {
        nb = 1;
    } else {
        nb = 0;
    }
    return (nb);
}

int my_compute_power_rec(int nb, int p)
{
    if (nb <= 0 || p > 2147483647) {
        show_error(nb);
    } else if (nb < 0) {
        nb = nb * my_compute_power_rec(nb, p - 1);
    }
    return (nb);
}
