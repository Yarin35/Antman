##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	antman.c		\
		\
		lib/get_file_content.c		\
		lib/str_split.c			\
		lib/my_calloc.c			\
		lib/create_dico.c		\
		lib/isNew.c			\
		lib/compress_data.c		\
		lib/get_index.c			\
		lib/intlen.c			\
		lib/int_to_str.c		\
		lib/create_file.c

SRC2	=	giantman.c		\
		\
		lib/get_file_content.c		\
		lib/build_dico.c		\
		lib/str_split.c			\
		lib/str_split_2.c		\
		lib/my_calloc.c			\
		lib/decompress_data.c		\
		lib/get_word.c			\
		lib/create_file.c		\
		lib/my_strdup.c			\
		lib/my_strlen.c			\
		lib/str_cut.c


NAME	=	Antman

NAME2	=	Giantman

CFLAGS	=	-Wall -Werror -Wextra -I./include -g

all:	$(NAME)

$(NAME):	
	gcc -o $(NAME) $(CFLAGS) $(SRC)
	gcc -o $(NAME2) $(CFLAGS) $(SRC2)

clean:
	rm -f compressed.txt
	rm -f decompressed.txt

fclean:	clean
	rm -f $(NAME)
	rm -f $(NAME2)

re:	fclean all

.PHONY:	all clean fclean re
