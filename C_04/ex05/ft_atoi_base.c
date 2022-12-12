/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:24:51 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:32:16 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_lengh(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_base_check(char *base)
{
	int	f;
	int	s;

	if (ft_str_lengh(base) < 2)
		return (0);
	f = 0;
	while (f < ft_str_lengh(base) - 1)
	{
		s = f + 1;
		while (base[s])
		{
			if (base[f] == base[s] || (base[f] > 8 && base [f] < 14)
				|| (base [s] > 8 && base[s] < 14) || base[s] == 32
				|| base [f] == 32 || base[s] == 43 || base[s] == 45
				|| base[f] == 43 || base[f] == 45)
				return (0);
			s++;
		}
		f++;
	}
	return (1);
}

int	ft_include_in_base(char c, char *base)
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
	while (base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	if (!ft_base_check(base))
		return (0);
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
		if (str[i - 1] == '-')
			s = -s;
	}
	r = 0;
	while (ft_include_in_base(str[i], base))
	{
		r = r * ft_str_lengh(base);
		r = r + ft_index_in_base(str[i], base);
		i++;
	}
	r = r * s;
	return (r);
}
