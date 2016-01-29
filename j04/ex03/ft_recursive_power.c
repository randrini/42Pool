/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 20:28:53 by randrini          #+#    #+#             */
/*   Updated: 2015/10/24 20:28:55 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 0)
	{
		return (result * (ft_recursive_power(nb, power - 1)));
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
