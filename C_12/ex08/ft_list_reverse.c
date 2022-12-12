/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:19:29 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:50:04 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*ptr1;
	t_list	*ptr2;
	t_list	*head;

	ptr1 = 0;
	head = *begin_list;
	while (head != 0)
	{
		ptr2 = head->next;
		head->next = ptr1;
		ptr1 = head;
		head = ptr2;
	}
	begin_list = &ptr1;
}
