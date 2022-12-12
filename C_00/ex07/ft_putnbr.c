/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 18:42:36 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/05 12:09:05 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
