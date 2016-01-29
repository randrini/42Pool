/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:28:50 by randrini          #+#    #+#             */
/*   Updated: 2016/01/26 15:12:02 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		filelen(char *str)
{
	char	tmp;
	int		i;
	int		fd;

	i = 0;
	fd = open(str, O_RDONLY);
	while (read(fd, &tmp, 1))
		i++;
	close(fd);
	return (i);
}

void	ft_tail(char *str, int end)
{
	char	txt;
	int		fd;
	int		len;
	int		i;

	i = 0;
	len = filelen(str);
	fd = open(str, O_RDONLY);
	while (read(fd, &txt, 1))
	{
		if (i >= len - end)
			ft_putchar(txt);
		i++;
	}
	close(fd);
}
