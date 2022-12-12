/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:52:38 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/23 13:15:22 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*ptr;

	ptr = begin_list;
	while (ptr->next != 0)
	{
		begin_list = ptr->next;
		free_fct(ptr->data);
		free(ptr->next);
		ptr = begin_list;
	}
	free_fct(ptr->data);
	free(ptr->next);
}
