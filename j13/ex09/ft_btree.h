/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrini <randrini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:15:33 by randrini          #+#    #+#             */
/*   Updated: 2016/01/20 16:19:20 by randrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>

typedef struct	s_btree
{
	struct s_btree	*right;
	struct s_btree	*left;
	void			*item;
}				t_btree;

t_btree			*btree_create_node(void *item);

#endif
