/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:30:51 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:33:56 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_action(int start, int nb)
{
	start = start * nb;
	nb--;
	if (nb > 1)
		return (ft_recursive_action(start, nb));
	return (start);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_action(1, nb));
}
