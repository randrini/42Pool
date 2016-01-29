/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_lib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 12:43:03 by randrini          #+#    #+#             */
/*   Updated: 2016/01/23 13:31:34 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISP_LIB_H
# define FT_DISP_LIB_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

# define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_display_file(char *file);

#endif
