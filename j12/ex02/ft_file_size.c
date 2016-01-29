/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 15:38:37 by randrini          #+#    #+#             */
/*   Updated: 2016/01/25 14:29:23 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		file_size(char *file)
{
	int		fd;
	int		size;
	char	*buf;

	buf = NULL;
	size = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, buf, 1))
		size++;
	close(fd);
	return (size);
}
