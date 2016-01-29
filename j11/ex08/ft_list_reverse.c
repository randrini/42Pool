/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:23:12 by randrini          #+#    #+#             */
/*   Updated: 2016/01/18 17:28:28 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*next_list;
	t_list	*new_list;

	new_list = NULL;
	list = *begin_list;
	while (list)
	{
		next_list = list->next;
		list->next = new_list;
		new_list = list;
		list = next_list;
	}
	*begin_list = new_list;
}
