##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile of infinadd
##

NAME	=	antman

SRC	=	src/main.c 							\
		src/antman.c						\
		src/read_file.c						\
		src/html.c							\
		src/songs/songs.c					\
		src/images.c						\
		src/songs/my_strtowarr.c 			\
		src/songs/word_to_array.c 			\
		src/songs/replace_words.c 			\
		src/songs/support_func.c	 		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/ -pedantic -g3 #-Wpedantic -Wno-long-long -Werror -W -Wall -Wextra

LDLIBS	=	-L./lib/ -lmy

all:		$(NAME)

$(NAME):	make_lib $(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LDLIBS)

make_lib:
		$(MAKE) -C lib/my

clean:
		rm -f $(OBJ)
		$(MAKE) clean -C lib/my/

fclean: 	clean
		rm -f $(NAME)
		$(MAKE) fclean -C lib/my

run_tests:

re:		fclean all
		$(MAKE) re -C lib/my
