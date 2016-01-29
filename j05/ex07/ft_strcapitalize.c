/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 14:28:20 by randrini          #+#    #+#             */
/*   Updated: 2015/10/28 14:28:22 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int isup;

	i = 0;
	isup = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57) ||
			(str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (isup && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!isup && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			isup = 0;
		}
		else
			isup = 1;
		i++;
	}
	return (str);
}
