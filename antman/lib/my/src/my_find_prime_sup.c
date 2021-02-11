/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** find prime nb greater or equal
*/

#include "libmy.h"

int my_find_prime_sup(int nb)
{
    if (nb <= 2) {
        return (2);
    }

    while (my_is_prime(nb) != 1) {
        nb++;
    }
    return (nb);
}
