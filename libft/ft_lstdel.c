/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 16:18:07 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/16 18:22:53 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *tmp2;

	if (!(*alst))
		return ;
	tmp = *alst;
	tmp2 = tmp->next;
	while (tmp)
	{
		tmp2 = tmp->next;
		ft_lstdelone(&tmp, del);
		tmp = tmp2;
	}
	*alst = NULL;
}
