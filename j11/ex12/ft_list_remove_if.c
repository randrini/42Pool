/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 18:13:27 by randrini          #+#    #+#             */
/*   Updated: 2016/01/18 18:22:18 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr1;
	t_list	*list_ptr2;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		list_ptr1 = *begin_list;
		*begin_list = (*begin_list)->next;
		free(list_ptr1);
	}
	list_ptr2 = *begin_list;
	while (list_ptr2 && list_ptr2->next)
	{
		if (cmp(list_ptr2->next->data, data_ref) == 0)
		{
			list_ptr1 = list_ptr2->next;
			list_ptr2->next = list_ptr1->next;
			free(list_ptr1);
		}
		if (list_ptr2->next)
			list_ptr2 = list_ptr2->next;
	}
}
