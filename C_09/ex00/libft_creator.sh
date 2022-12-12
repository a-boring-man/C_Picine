# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 12:50:20 by jrinna            #+#    #+#              #
#    Updated: 2021/09/20 13:01:00 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
gcc -Wall -Werror -Wextra -c *c
ar -rc libft.a *.o
rm -f *.o