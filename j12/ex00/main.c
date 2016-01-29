/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 13:31:45 by randrini          #+#    #+#             */
/*   Updated: 2016/01/23 13:47:31 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_disp_lib.h"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr("File name missing.\n");
		if (ac > 2)
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		if (ft_display_file(av[1]) == 1)
			return (1);
		return (0);
	}
}
