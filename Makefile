##
## EPITECH PROJECT, 2024
## B-CPE-110-NCE-1-1-settingup-hilal.tarhan
## File description:
## Makefile
##

NAME	= setting_up

SRC		= setting_up.c \
		  load.c \
		  square.c \
		  map.c \
		  main.c \

OBJ		= $(SRC:.c=.o)

CFLAGS = -g3

all	: $(NAME)

$(NAME): $(OBJ)
		make -C my_lib/my/
		gcc $(OBJ) -o $(NAME) -L./my_lib/my/ -lmy $(CFLAGS)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)
		rm -rf libmy.a
		make fclean -C my_lib/my/

re :	fclean all
