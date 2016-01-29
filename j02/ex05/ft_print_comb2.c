/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 20:58:33 by randrini          #+#    #+#             */
/*   Updated: 2015/10/19 20:58:39 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;

	i = 1;
	while (i <= 10000)
	{
		if ((i / 100) < (i % 100))
		{
			ft_putchar(i / 1000 + '0');
			ft_putchar((i / 100) % 10 + '0');
			ft_putchar(' ');
			ft_putchar((i / 10) % 10 + '0');
			ft_putchar(i % 10 + '0');
			if (i < 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
