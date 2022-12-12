/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:30:57 by jrinna            #+#    #+#             */
/*   Updated: 2021/09/22 18:53:19 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_add(int a, int b);
int		ft_atoi(char *str);
int		ft_div(int a, int b);
int		ft_div_zero(char c, int n);
int		ft_is_in_op(int c, char *str);
int		ft_mod(int a, int b);
int		ft_mod_zero(char c, int n);
int		ft_mult(int a, int b);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_subs(int a, int b);

#endif
