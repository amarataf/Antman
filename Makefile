##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile of infinadd
##

NAME	=	ola

all:		$(NAME)

$(NAME):	make_lib $(OBJ)

make_lib:
		$(MAKE) -C	antman/
		$(MAKE)	-C	giantman/

clean:
		rm -f $(OBJ)
		$(MAKE) clean -C antman/
		$(MAKE) clean -C giantman/

fclean: 	clean
		rm -f $(NAME)
		$(MAKE) fclean -C antman/
		$(MAKE) fclean -C giantman/

run_tests:

re:		fclean all
		$(MAKE) re -C antman/
		$(MAKE) re -C giantman/
