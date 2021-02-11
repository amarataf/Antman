##
## EPITECH PROJECT, 2020
## makefile
## File description:
## library makefile
##

NAME	=	libmy.a

SRC	=	src/my_compute_power_rec.c		\
		src/my_compute_square_root.c 	\
		src/my_find_prime_sup.c			\
		src/my_getnbr.c					\
		src/my_isneg.c					\
		src/my_is_prime.c				\
		src/my_putchar.c				\
		src/my_put_nbr.c				\
		src/my_putstr.c					\
		src/my_revstr.c					\
		src/my_sort_int_array.c			\
		src/my_strcapitalize.c			\
		src/my_strcat.c					\
		src/my_strcmp.c					\
		src/my_strncpy.c				\
		src/my_str_isalpha.c			\
		src/my_str_islower.c			\
		src/my_str_isupper.c			\
		src/my_str_isnum.c				\
		src/my_str_isprintable.c		\
		src/my_strlen.c					\
		src/my_strlowcase.c				\
		src/my_strncat.c				\
		src/my_strncmp.c				\
		src/my_strstr.c					\
		src/my_strcpy.c					\
		src/my_strupcase.c				\
		src/my_strdup.c					\
		src/my_getnbr_from_char.c		\
		src/my_malloc.c					\
		src/my_swap.c

CFLAGS	+=	-I./include/ -pedantic
CFLAGS	+=	-W -Wall -Wextra -Wpedantic -Wno-long-long -Werror

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../$(NAME)
		cp include/libmy.h ../../include/.
		cp include/ant.h ../../include/.

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)
		rm -rf ../$(NAME)

re:		fclean all
