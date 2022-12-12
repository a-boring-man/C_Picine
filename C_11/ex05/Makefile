# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 11:14:14 by jrinna            #+#    #+#              #
#    Updated: 2021/09/22 18:46:42 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = ft_add.c ft_atoi.c ft_div.c ft_div_zero.c ft_is_in_op.c ft_mod.c ft_mod_zero.c ft_mult.c ft_putnbr.c ft_putstr.c ft_subs.c main.c

INC = includes

OBJ = $(SRCS:.c=.o)

CC = gcc

NAME = do-op

CFLAGS = -Wall -Wextra -Werror

${NAME}:${OBJ}
	$(CC) $(CFLAGS) $(OBJ) -o do-op

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o ${^:.c=.o}

all : ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf $(NAME)

re : fclean all
