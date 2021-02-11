/*
** EPITECH PROJECT, 2020
** giant.h
** File description:
** my_ls header file
*/

#ifndef MY_GIANT_H_
#define MY_GIANT_H_

#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/stat.h>

int giantman(char *, int);
char *read_file(char *);
char *decomp_song(char *);
void decomp_image(char *, int, int, int);
char *decomp_html(char *);
char *decomp(char *, int);
int my_ischar(char);
void compare_words(char **, char *);
int count_words(char *);
char **my_str_to_word_array(char *);
int count_w(char *str);
int is_check(char w);
int isUsed(char *, char **, int);
char **new_word(char **, char *, int *);
int len_of_word(char *, int);
int check_sep(char);
int word_length(char *, int);
void check_space(int *);
int print_string(char *, int, char **);
int check_sep(char);

#endif
