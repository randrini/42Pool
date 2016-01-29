/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:42:45 by randrini          #+#    #+#             */
/*   Updated: 2016/01/20 15:54:11 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*temp;

	i = -1;
	temp = begin_list;
	while (temp && ++i < nbr)
		temp = temp->next;
	if (i == nbr)
		return (temp);
	else
		return (NULL);
}

int			ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		size;

	size = 0;
	temp = begin_list;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

void		ft_swap(t_list **elem1, t_list **elem2)
{
	void	*temp_data;

	temp_data = (*elem1)->data;
	(*elem1)->data = (*elem2)->data;
	(*elem2)->data = temp_data;
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	t_list			*temp1;
	t_list			*temp2;
	unsigned int	list_size;
	unsigned int	i;
	unsigned int	j;

	list_size = ft_list_size(begin_list);
	i = 0;
	j = list_size - 1;
	while (i != j && i != list_size / 2)
	{
		temp1 = ft_list_at(begin_list, i);
		temp2 = ft_list_at(begin_list, j);
		ft_swap(&temp1, &temp2);
		i++;
		j--;
	}
}
