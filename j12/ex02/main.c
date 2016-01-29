/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:33:16 by randrini          #+#    #+#             */
/*   Updated: 2016/01/26 15:13:00 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int ac, char **av)
{
	int	i;
	int	at;
	int	end;

	i = 3;
	at = 0;
	end = ft_atoi(av[2]);
	while (av[i])
	{
		if (ac > 4)
		{
			if (at++)
				ft_putchar('\n');
			ft_putstr("==> ");
			ft_putstr(av[i]);
			ft_putstr(" <==\n");
		}
		ft_tail(av[i], end);
		i++;
	}
	return (0);
}
