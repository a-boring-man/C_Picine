/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:51:26 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:37:46 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*ft_itoa(int nbr, char *base);

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if ((base[i] > 8 && base[i] < 14) || base[i] == 32
			|| base[i] == 45 || base[i] == 43)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	r;
	int	i;
	int	s;

	i = 0;
	s = 1;
	while (nbr[i] == 32 || (nbr[i] > 8 && nbr[i] < 14))
		i++;
	while (nbr[i] == 45 || nbr[i] == 43)
	{
		if (nbr[i] == 45)
			s = -s;
		i++;
	}
	r = 0;
	while (ft_is_in_base(nbr[i], base))
	{
		r = r * ft_strlen(base);
		r = r + ft_index_in_base(nbr[i], base);
		i++;
	}
	return (r * s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;

	if (!(ft_base_check(base_from) && ft_base_check(base_to)))
		return (0);
	i = ft_atoi_base(nbr, base_from);
	return (ft_itoa(i, base_to));
}
