/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:21:13 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:32:28 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_sig(char c)
{
	if (c == 43 || c == 45)
		return (1);
	else
		return (0);
}

int	ft_base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_base_check(char *str)
{
	int	l;
	int	s;
	int	f;

	l = ft_base_len(str);
	if (l < 2)
		return (0);
	else
	{
		f = 0;
		while (str[f])
		{
			s = f + 1;
			while (str[s])
			{
				if (str[f] == str[s] || ft_sig(str[s]) || ft_sig(str[f]))
					return (0);
				s++;
			}
			f++;
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nl;
	int		r;

	if (ft_base_check(base))
	{
		nl = nbr;
		if (nl < 0)
		{
			nl = -nl;
			write(1, "-", 1);
		}
		r = nl % ft_base_len(base);
		if (nl >= ft_base_len(base))
		{
			ft_putnbr_base((nl / ft_base_len(base)), base);
		}
		ft_putchar(base[r]);
	}
	return ;
}
