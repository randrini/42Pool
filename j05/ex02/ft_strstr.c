/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 21:27:48 by randrini          #+#    #+#             */
/*   Updated: 2015/10/27 21:27:51 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *start;
	char *pattern;

	while (*str)
	{
		start = str;
		pattern = to_find;
		while (*str && *pattern && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (!*pattern)
			return (start);
		str = start + 1;
	}
	return (0);
}
