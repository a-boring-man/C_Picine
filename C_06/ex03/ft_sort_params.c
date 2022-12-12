/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:13:13 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:34:24 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_compare(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(int s, char **av)
{
	char	*a;

	a = av[s];
	av[s] = av[s + 1];
	av[s + 1] = a;
}

void	ft_sort_double_tab(char **argv, int argc)
{
	int	i;
	int	j;

	j = 0;
	while (j < argc)
	{
		i = 1;
		while (argv[i + 1])
		{
			if (ft_compare(argv[i], argv[i + 1]) > 0)
				ft_swap(i, argv);
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		ft_sort_double_tab(argv, argc);
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
