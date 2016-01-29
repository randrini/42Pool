/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 13:18:27 by randrini          #+#    #+#             */
/*   Updated: 2016/01/26 13:20:46 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	g_add;
int	g_option;
int	g_end;

int	main(int ac, char **av)
{
	g_add = 0;
	if (!(ft_strcmp(av[1], "-C")))
		g_option = 1;
	else
		g_option = 0;
	g_end = ac - 1 - g_option;
	hexdump(av);
	return (0);
}
