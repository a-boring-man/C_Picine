/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:44:09 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/23 18:57:07 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = *begin_list;
	while (ptr->next != 0)
	{
		if (cmp(ptr->data, data_ref) == 0)
		{
			tmp = ptr->next;
			free_fct(ptr->data);
			free(ptr->next);
			ptr = tmp;
		}
		else
			ptr = ptr->next;
	}
	if (cmp(ptr->data, data_ref) == 0)
	{
		free_fct(ptr->data);
		free(ptr->next);
	}
}
