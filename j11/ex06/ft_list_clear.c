/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:09:20 by randrini          #+#    #+#             */
/*   Updated: 2016/01/18 17:12:36 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;

	if (*begin_list)
	{
		while ((*begin_list)->next)
		{
			list = *begin_list;
			*begin_list = (*begin_list)->next;
			free(list);
		}
	}
	*begin_list = NULL;
}
