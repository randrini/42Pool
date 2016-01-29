/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 12:43:03 by randrini          #+#    #+#             */
/*   Updated: 2016/01/26 13:28:18 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include <stdlib.h>

# define BASE "0123456789"
# define HEX "0123456789abcdef"

void	file_error(void);
char	*ft_convert_base(int nbr, char *base_from, char *base_to);
void	ft_display_hexdump(char *file);
int		ft_power(int nb, int pow);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
void	hexdump(char **file);
void	hex_print(char txt);
void	hex_print_c(char txt);

#endif
