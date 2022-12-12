/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:36:28 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/23 18:34:42 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*ptr;

	ptr = begin_list;
	while (ptr->next != 0)
	{
		f(ptr->data);
		ptr = ptr->next;
	}
	f(ptr->data);
	ptr = ptr->next;
}
