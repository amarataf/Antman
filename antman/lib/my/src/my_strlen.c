/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** .lenght
*/

int my_strlen(char *str)
{
    int counter = 0;

    while (str[counter] != '\0')
        counter++;
    return (counter);
}
