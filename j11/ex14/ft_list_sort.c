/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 18:31:29 by randrini          #+#    #+#             */
/*   Updated: 2016/01/18 18:37:17 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	void	*data_temp;
	int		swap_flag;
	t_list	*temp;

	swap_flag = 1;
	if (*begin_list == NULL)
		return ;
	while (swap_flag)
	{
		swap_flag = 0;
		temp = *begin_list;
		while (temp->next)
		{
			if (cmp(temp->data, temp->next->data) > 0)
			{
				data_temp = temp->data;
				temp->data = temp->next->data;
				temp->next->data = data_temp;
				swap_flag = 1;
			}
			temp = temp->next;
		}
	}
}
