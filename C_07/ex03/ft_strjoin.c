/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:33:18 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:37:53 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_end_conca(char *t, char **strs, int i, int k)
{
	int	j;

	j = 0;
	while (strs[i][j])
	{
		t[k] = strs[i][j];
		j++;
		k++;
	}
	t[k] = '\0';
	return (t);
}

char	*ft_concatenation(char *t, char **strs, char *sep, int nstr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < (nstr - 1))
	{
		j = 0;
		while (strs[i][j])
		{
			t[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j])
		{
			t[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	return (ft_end_conca(t, strs, i, k));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		c;
	int		nstr;
	char	*t;
	char	*e;

	i = 0;
	c = 0;
	nstr = 0;
	while (i < size)
	{
		c = c + ft_strlen(strs[i]);
		i++;
		nstr++;
	}
	t = malloc(sizeof(char) * (c + (nstr - 1) * ft_strlen(sep) + 1));
	if (size == 0)
	{
		e = malloc(sizeof(char) * 0);
		return (e);
	}
	return (ft_concatenation(t, strs, sep, nstr));
}
