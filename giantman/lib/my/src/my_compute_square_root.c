/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** calculate square root
*/

int my_compute_square_root(int nb)
{
    int sqr = 0;

    if (nb <= 0) {
        return (0);
    } else {
        while (sqr * sqr != nb) {
            sqr++;
            if (sqr > nb) {
                return (0);
            }
        }
    }
    return (sqr);
}
