/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:55:26 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/23 11:08:07 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;
	t_list	*last;

	last = ft_create_elem(data);
	ptr = *begin_list;
	while (ptr->next != 0)
	{
		ptr = ptr->next;
	}
	ptr->next = last;
}
