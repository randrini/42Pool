/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 17:53:35 by randrini          #+#    #+#             */
/*   Updated: 2016/01/21 19:01:46 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r')
		return (1);
	return (0);
}

int		ft_is_numeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		n;
	char	sign;
	int		c;

	n = 0;
	while (ft_isspace(*str))
		++str;
	sign = *str;
	if (sign == '+' || sign == '-')
		++str;
	while (ft_is_numeric(*str))
	{
		c = *str - '0';
		n = n * 10 + c;
		++str;
	}
	return (sign == '-' ? -n : n);
}
