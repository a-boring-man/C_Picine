/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:13:57 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:47:52 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int i, char **tab)
{
	char	*tmp;

	tmp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j + 1])
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				ft_swap(j, tab);
			j++;
		}
		i++;
	}
}
