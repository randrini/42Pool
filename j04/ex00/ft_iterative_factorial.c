/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 18:11:59 by randrini          #+#    #+#             */
/*   Updated: 2015/10/24 18:12:01 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int j;
	int i;

	if (nb >= 0)
	{
		i = 1;
		j = 1;
		while (nb >= i)
		{
			j = j * i;
			i++;
		}
	}
	else
		return (0);
	return (j);
}
