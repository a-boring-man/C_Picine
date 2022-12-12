/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:32:34 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:48:55 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*destination;
	int	i;

	i = 0;
	destination = malloc(sizeof(int) * length);
	while (i < length)
	{
		destination[i] = (*f)(tab[i]);
		i++;
	}
	return (destination);
}
