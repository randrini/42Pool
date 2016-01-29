/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 16:37:03 by randrini          #+#    #+#             */
/*   Updated: 2016/01/21 22:02:17 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_LIB_H
# define FT_OP_LIB_H

# include <unistd.h>

void			ft_do_op(int a, char *op, int b);
void			ft_add(int a, int b);
void			ft_sub(int a, int b);
void			ft_mul(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char *str);

typedef struct	s_op
{
	int	x;
	int y;
}				t_op;

#endif
