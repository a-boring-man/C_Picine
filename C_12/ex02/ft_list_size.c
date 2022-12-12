/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:50:22 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/23 10:10:00 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int		count;

	count = 1;
	ptr = begin_list;
	if (begin_list == 0)
		return (0);
	while (ptr->next != 0)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
