/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:38:57 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:32:40 by jrinna           ###   ########lyon.fr   */
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
