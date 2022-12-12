/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:09:21 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:30:29 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	find(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (to_find[j])
	{
		if (to_find[j] != str[i])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		if (find(str, to_find, i))
			return (&str[i]);
		i++;
	}
	return (0);
}
