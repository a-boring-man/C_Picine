/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:17:10 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/23 14:12:36 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;
	t_list			*ptr;

	count = 0;
	ptr = begin_list;
	while (count < nbr)
	{
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
