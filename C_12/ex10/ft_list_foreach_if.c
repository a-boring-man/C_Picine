/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:55:36 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/23 18:33:58 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)())
{
	t_list	*ptr;

	ptr = begin_list;
	while (ptr->next != 0)
	{
		if (cmp(ptr->data, data_ref) == 0)
			f(ptr->data);
		ptr = ptr->next;
	}
	if (cmp(ptr->data, data_ref) == 0)
		f(ptr->data);
}
