/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:10:08 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/17 11:26:50 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	c;

	while (*str != '\0')
	{
		c = *str;
		write(1, &c, 1);
		++str;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nl;
	int		r;
	char	f;

	nl = nb;
	if (nl < 0)
	{
		nl = -nl;
		write(1, "-", 1);
	}
	r = nl % 10;
	if (nl > 9)
	{
		ft_putnbr(nl / 10);
	}
	f = r + '0';
	ft_putchar(f);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
