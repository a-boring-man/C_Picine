/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:27:07 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/08 13:24:19 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	ft_min(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

char	ft_maj(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

char	ft_num(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = -1;
	while (i++, str[i])
	{
		c = i - 1;
		if (ft_min(str[i]))
		{
			if (!(ft_maj(str[c]) || ft_min(str[c]) || ft_num(str[c])))
				str[i] = str[i] - 32;
		}
		if (ft_maj(str[i]))
		{
			if (ft_min(str[c]) || ft_maj(str[c]) || ft_num(str[c]))
				str[i] = str[i] + 32;
		}
	}
	return (str);
}
