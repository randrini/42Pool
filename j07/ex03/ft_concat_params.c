/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 17:20:53 by randrini          #+#    #+#             */
/*   Updated: 2016/01/09 23:04:14 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	len = 0;
	while (i++ < argc - 1)
	{
		len = len + ft_strlen(argv[j + 1]) + 1;
		j++;
	}
	str = (char*)malloc(sizeof(*str) * len);
	if (str == NULL)
		return (0);
	str[0] = 0;
	i = 0;
	while (i < argc - 1)
	{
		str = ft_strcat(str, argv[i + 1]);
		i++;
	}
	str[len - 1] = '\0';
	return (str);
}
