/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:21:19 by randrini          #+#    #+#             */
/*   Updated: 2016/01/18 16:25:23 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = NULL;
	new_elem = (t_list*)malloc(sizeof(t_list));
	if (new_elem)
	{
		new_elem->data = data;
		new_elem->next = NULL;
	}
	return (new_elem);
}
