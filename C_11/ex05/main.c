/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:39:41 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/22 18:46:17 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_pos_in_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (0);
}

void	ft_doop(int a, char op, int b, char *c)
{
	int	(*psf[5])(int, int);

	psf[0] = &ft_add;
	psf[1] = &ft_subs;
	psf[2] = &ft_div;
	psf[3] = &ft_mult;
	psf[4] = &ft_mod;
	ft_putnbr(psf[ft_pos_in_str(op, c)](a, b));
	ft_putstr("\n");
}

int	main(int ac, char **av)
{
	char	*c;

	c = "+-/*%";
	if (ac == 4)
	{
		if (ft_strlen(av[2]) != 1 || !ft_is_in_op(av[2][0], c))
		{
			ft_putnbr (0);
			ft_putstr("\n");
			return (0);
		}
		if (ft_div_zero(*av[2], ft_atoi(av[3])))
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		if (ft_mod_zero(*av[2], ft_atoi(av[3])))
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		else
			ft_doop(ft_atoi(av[1]), *av[2], ft_atoi(av[3]), c);
	}
}
