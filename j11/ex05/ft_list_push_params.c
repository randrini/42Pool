/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:57:49 by randrini          #+#    #+#             */
/*   Updated: 2016/01/18 17:05:49 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*temp;

	i = 0;
	list = NULL;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		temp->next = list;
		list = temp;
		i++;
	}
	return (list);
}
