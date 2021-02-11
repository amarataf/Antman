/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** find if a number is a prime number
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 1) {
        return (0);
    }
    while (nb % i > 0) {
        i++;
        if (i == nb) {
            return (1);
        }
    }
    return (0);
}
