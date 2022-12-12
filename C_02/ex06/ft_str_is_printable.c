/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:39:31 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/05 19:39:40 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	i = -1;
	r = 0;
	while (i++, str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			r++;
	}
	if (r != 0)
		return (0);
	else
		return (1);
}
