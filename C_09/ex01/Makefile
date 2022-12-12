# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 11:14:14 by jrinna            #+#    #+#              #
#    Updated: 2021/09/22 20:02:54 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INC = includes

OBJ = $(SRCS:.c=.o)

CC = gcc

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ} 

${OBJ}: ${SRCS}
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

all : ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf $(NAME)

re : fclean all
