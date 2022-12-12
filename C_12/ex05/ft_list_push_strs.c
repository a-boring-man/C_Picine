/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:17:39 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/23 11:51:33 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*head;
	t_list	*ptr;

	i = 0;
	head = 0;
	while (i < size)
	{
		ptr = ft_create_elem(strs[i]);
		ptr->next = head;
		head = ptr;
		i++;
	}
	return (head);
}
