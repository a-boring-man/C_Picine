/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:33:53 by jrinna            #+#    #+#             */
/*   Updated: 2022/12/12 10:43:21 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ABS(atoi(argv[1])));
}
