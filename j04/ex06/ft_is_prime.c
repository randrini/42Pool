/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 16:23:08 by randrini          #+#    #+#             */
/*   Updated: 2015/10/26 16:23:10 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (i <= (nb - 1))
		{
			if (nb % i == 0)
				return (0);
			else if (nb % i != 0)
				i++;
		}
		return (1);
	}
}
