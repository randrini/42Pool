/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 19:37:13 by randrini          #+#    #+#             */
/*   Updated: 2015/10/26 19:37:15 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
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

int		ft_find_next_prime(int nb)
{
	int i;

	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		i = nb + 1;
		while ((ft_is_prime(i)) != 1)
			i++;
		return (i);
	}
}
