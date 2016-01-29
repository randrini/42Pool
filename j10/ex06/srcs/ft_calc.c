/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 21:03:23 by randrini          #+#    #+#             */
/*   Updated: 2016/01/21 21:12:49 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op_lib.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	ft_putnbr(a / b);
	ft_putchar('\n');
}

void	ft_mod(int a, int b)
{
	ft_putnbr(a % b);
	ft_putchar('\n');
}
