/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:14:17 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:37:57 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	taille;
	int	i;

	taille = max - min;
	i = 0;
	if (taille < 1)
	{
		*range = 0;
		return (0);
	}
	range[0] = malloc(sizeof(int) * taille);
	if (!range[0])
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (taille);
}
