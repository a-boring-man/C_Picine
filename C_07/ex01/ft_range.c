/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:22:03 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:38:02 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	taille;
	int	*t;
	int	i;

	taille = max - min;
	i = 0;
	if (taille <= 0)
		return (0);
	t = malloc(sizeof(int) * taille);
	while (min < max)
	{
		t[i] = min;
		min++;
		i++;
	}
	return (t);
}
