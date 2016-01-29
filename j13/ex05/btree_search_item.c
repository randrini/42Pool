/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:24:02 by randrini          #+#    #+#             */
/*   Updated: 2016/01/20 17:30:59 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *,
			void *))
{
	if (!(root))
		return (NULL);
	btree_search_item(root->left, data_ref, cmpf);
	if ((*cmpf)(data_ref, (*root).item) == 0)
		return (root->item);
	btree_search_item((root)->right, data_ref, cmpf);
	return (0);
}
