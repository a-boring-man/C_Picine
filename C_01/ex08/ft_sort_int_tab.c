/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:16:54 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/04 20:08:46 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (i++, i < size)
	{
		j = size;
		while (j--, j > 0)
		{
			if (tab[j] < tab[j - 1])
			{
				t = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = t;
			}
		}
	}
}
