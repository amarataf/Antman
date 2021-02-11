/*
** EPITECH PROJECT, 2020
** ant.h
** File description:
** my_ls header file
*/

#ifndef MY_ANT_H_
#define MY_ANT_H_

#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

char *read_file(char *);
int antman(char *, int);
void comp_image(char *, int, int, int);
char *comp_html(char *);
char *comp_song(char *);
int my_ischar(char);
void compare_words(char **, char *);
int count_words(char *);
char **my_str_to_word_array(char *);
int count_w(char *str);
int is_check(char w);
int len_of_word(char *, int);
int *replace_words(char **, char **, int);
int isUsed(char *, char **, int);
char **malloc_strarr(char **, char *);
char **new_word(char **, char *, int *);
void print_word(char **, int *);

#endif
