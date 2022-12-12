/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:49:52 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:34:03 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	if (nb >= 0)
	{
		r = 1;
		while (nb > 0)
		{
			r = r * nb;
			nb--;
		}
		return (r);
	}
	else
		return (0);
}
