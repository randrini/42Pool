/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 19:36:15 by randrini          #+#    #+#             */
/*   Updated: 2016/01/21 22:18:42 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op_lib.h"

void	ft_which_op(t_op data, char *op)
{
	void	(*tab[5])(int, int);

	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_mul;
	tab[3] = &ft_div;
	tab[4] = &ft_mod;
	if (*op == '+')
		tab[0](data.x, data.y);
	if (*op == '-')
		tab[1](data.x, data.y);
	if (*op == '*')
		tab[2](data.x, data.y);
	if (*op == '/')
		tab[3](data.x, data.y);
	if (*op == '%')
		tab[4](data.x, data.y);
}

void	ft_do_op(int a, char *op, int b)
{
	t_op	data;

	data.x = a;
	data.y = b;
	if (op[1] != '\0' || (op[0] != '+' && op[0] != '-' && op[0] != '*' &&
			op[0] != '/' && op[0] != '%'))
		write(1, "0\n", 2);
	else if (op[0] == '/' && data.y == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (op[0] == '%' && data.y == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		ft_which_op(data, op);
}
