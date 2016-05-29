##
## Makefile for  in /home/baptiste/rendu/game_pendu
## 
## Made by 
## Login   <baptiste@epitech.net>
## 
## Started on  Sun May 29 17:48:49 2016 
## Last update Sun May 29 18:03:05 2016 
##

NAME	:=	pendu

SRC	:=	main.c \
		init.c \
		str.c \
		check.c

INC_DIR	:=	include

CC	:=	cc

OBJ	:=	$(SRC:.c=.o)

LIB	:=	-I./include/

CFLAGS  :=	-Wall -Wextra -W -pedantic -ansi  -std=gnu99

CFLAGS	+=	-I$(INC_DIR)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all
