/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 20:09:13 by randrini          #+#    #+#             */
/*   Updated: 2015/10/24 20:09:15 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (power > 0)
	{
		while (power > 0 && i < power)
		{
			result *= nb;
			++i;
		}
		return (result);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
