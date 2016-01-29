/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 12:56:54 by randrini          #+#    #+#             */
/*   Updated: 2016/01/23 13:51:59 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_disp_lib.h"

int		ft_display_file(char *file)
{
	int		len;
	int		fd;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (1);
	while ((len = read(fd, buf, BUF_SIZE)))
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
