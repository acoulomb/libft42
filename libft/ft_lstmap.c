/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 18:47:17 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/16 22:46:37 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list **tmp;
	t_list *def;

	def = NULL;
	tmp = &def;
	while (lst)
	{
		*tmp = NULL;
		if (!(*tmp = (*f)(lst)))
			return (NULL);
		tmp = &((*tmp)->next);
		lst = lst->next;
	}
	return (def);
}
