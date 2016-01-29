/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 15:03:45 by randrini          #+#    #+#             */
/*   Updated: 2015/10/26 15:03:47 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	a = 0;
	if (nb < 0)
		return (0);
	else
	{
		while (a * a < nb)
		{
			a++;
		}
		if (a * a == nb)
			return (a);
		else
			return (0);
	}
}
