/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 14:18:36 by randrini          #+#    #+#             */
/*   Updated: 2016/01/23 14:28:35 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_puterr(char *file, int no)
{
	if (no != 0)
	{
		ft_putstr("cat: ");
		ft_putstr(file);
		ft_putstr(": ");
		if (no == 2)
			ft_putstr("No such file or directory\n");
	}
}
