/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 14:12:47 by randrini          #+#    #+#             */
/*   Updated: 2016/01/23 14:16:09 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_cat(char *file)
{
	int		fd;
	int		len;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(file, O_RDONLY)) == -1)
		return (errno);
	while ((len = read(fd, buf, BUF_SIZE)))
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
