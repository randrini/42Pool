/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 12:48:49 by randrini          #+#    #+#             */
/*   Updated: 2016/01/26 12:51:24 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		while (i < len / 2)
		{
			tmp = str[i];
			str[i] = str[len - i - 1];
			str[len - i - 1] = tmp;
			i++;
		}
	}
	return (str);
}
