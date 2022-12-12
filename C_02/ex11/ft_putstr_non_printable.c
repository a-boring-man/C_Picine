/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:49:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:29:11 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str > 31 && *str < 127)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(unsigned char)*str / 16]);
			ft_putchar("0123456789abcdef"[(unsigned char)*str % 16]);
		}
		str++;
	}
}
