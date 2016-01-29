/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:14:37 by randrini          #+#    #+#             */
/*   Updated: 2016/01/18 17:20:07 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (0);
	while (begin_list && nbr > 0)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	if (nbr == 0)
		return (begin_list);
	else
		return (0);
}
