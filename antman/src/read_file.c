/*
** EPITECH PROJECT, 2021
** read_file
** File description:
** read map file
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "libmy.h"

int measure_size(char *str)
{
    struct stat buffsize;

    stat(str, &buffsize);
    return (buffsize.st_size);
}

char *read_file(char *file)
{
    int size = measure_size(file);
    int fd = open(file, O_RDONLY);
    char *buff = malloc(sizeof(char) * (size + 1));

    if (buff == NULL || fd == -1 || size == 0) {
        my_putstr("invalid file\n");
        return (NULL);
    }
    read (fd, buff, size);
    buff[size] = '\0';
    close (fd);
    return (buff);
}