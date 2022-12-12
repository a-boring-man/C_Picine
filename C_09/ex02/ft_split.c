/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:12:58 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/18 13:48:59 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_spliter(char *str, char *charset, char **tab)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (str[i])
	{
		if (!ft_is_in_str(str[i], charset))
			c++;
		else if (c > 0)
		{
			tab[j] = malloc(sizeof(char) * (c + 1));
			c = 0;
			j++;
		}
		i++;
	}
	if (c > 0)
		tab[j] = malloc(sizeof(char) * (c + 1));
}

void	ft_write(char **tab, char *str, char *charset)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	j = 0;
	while (str[i])
	{
		if (!ft_is_in_str(str[i], charset))
		{
			tab[j][c] = str[i];
			c++;
		}
		else if (c > 0)
		{
			tab[j][c] = '\0';
			j++;
			c = 0;
		}
		i++;
	}
	if (c > 0)
		tab[j][c] = '\0';
}

int	ft_double_tab_size(char *str, char *charset)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (str[i])
	{
		if (!ft_is_in_str(str[i], charset))
			c++;
		else if (c > 0)
		{
			j++;
			c = 0;
		}
		i++;
	}
	if (c > 0)
		j++;
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_double_tab_size(str, charset) + 1));
	tab [ft_double_tab_size(str, charset)] = 0;
	ft_spliter(str, charset, tab);
	ft_write(tab, str, charset);
	return (tab);
}
