/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:38:26 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/05 19:38:42 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	r;

	i = -1;
	r = 0;
	while (i++, str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			r++;
	}
	if (r != 0)
		return (0);
	else
		return (1);
}
