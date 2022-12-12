/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:52:18 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:48:00 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(int i, char **tab)
{
	char	*tmp;

	tmp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j + 1])
		{
			if (ft_compare(tab[j], tab[j + 1]) > 0)
				ft_swap(j, tab);
			j++;
		}
		i++;
	}
}
