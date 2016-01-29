/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 14:28:59 by randrini          #+#    #+#             */
/*   Updated: 2016/01/23 14:36:14 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			ft_puterr(av[i], ft_cat(av[i]));
			i++;
		}
		return (0);
	}
	else
		return (1);
}
