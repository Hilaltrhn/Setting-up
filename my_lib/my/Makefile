##
## EPITECH PROJECT, 2024
## my_lib
## File description:
## Makefile
##

NAME = libmy.a

SRC = 	my_compute_power_rec.c \
	my_compute_square_root.c \
	my_find_prime_sup.c \
	my_getnbr.c \
	my_isneg.c \
	my_is_prime.c \
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_revstr.c \
	my_strcat.c \
	my_strcmp.c \
	my_strcpy.c \
	my_str_isalpha.c \
	my_str_islower.c \
	my_str_isnum.c \
	my_str_isupper.c \
	my_strlen.c \
	my_strlowcase.c \
	my_strncat.c \
	my_strncpy.c \
	my_strupcase.c \
	my_swap.c \
	my_strdup.c \
	my_str_to_word_array.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../

clean	:
		rm -rf $(NAME)
		rm -rf $(OBJ)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all
