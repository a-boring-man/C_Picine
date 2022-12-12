/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:02:10 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/04 18:06:17 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = -1;
	while (i++, i < (size / 2))
	{
		t = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = t;
	}
}
