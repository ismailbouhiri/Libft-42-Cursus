# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 10:36:17 by ibouhiri          #+#    #+#              #
#    Updated: 2019/10/23 11:22:17 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra
CC = gcc
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -rf *.o

fclean : clean
	rm -rf *.a

re: fclean all
