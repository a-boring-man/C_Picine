/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:21:17 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/18 14:11:22 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count(int nbr, char *base)
{
	long	nl;
	int		lengh;
	int		count;

	lengh = ft_strlen(base);
	count = 2;
	nl = nbr;
	if (nbr < 0)
	{
		nl = -nl;
		count++;
	}
	while (nl >= lengh)
	{
		nl = (nl / lengh);
		count++;
	}
	return (count);
}

void	ft_itoa_recursive(char *t, char *base, long nl, int count)
{
	int	lengh;

	lengh = ft_strlen(base);
	if (nl >= lengh)
	{
		ft_itoa_recursive(t, base, (nl / lengh), (count - 1));
	}
	t[count] = base[nl % lengh];
}

char	*ft_itoa(int nbr, char *base)
{
	long	nl;
	char	*t;
	int		lengh;
	int		count;

	nl = nbr;
	count = ft_count(nbr, base);
	lengh = ft_strlen(base);
	t = malloc(sizeof(char) * count);
	if (nl < 0)
	{
		t[0] = '-';
		nl = -nl;
	}
	ft_itoa_recursive(t, base, nl, (count - 2));
	t[count - 1] = '\0';
	return (t);
}
