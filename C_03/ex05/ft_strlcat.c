/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:03:01 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:30:18 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;
	int	r;

	i = 0;
	while (src[i])
	{
		i++;
	}
	r = i;
	i = 0;
	return (r);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	long	i;
	long	t;
	long	l;

	i = 0;
	l = ft_strlen(src);
	while (dest[i])
	{
		i++;
	}
	t = i;
	if (i >= size)
		return (size + l);
	else
	{
		while (i < size - 1 && *src != '\0')
		{
			dest[i] = *src;
			src++;
			i++;
		}
		dest[i] = '\0';
		return (t + l);
	}
}
