/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 18:41:27 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/16 22:56:51 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		size;
	char	*tab;

	if (!s)
		return (NULL);
	size = 0;
	while (s[size])
		size++;
	if (!(tab = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	size = 0;
	while (s[size])
	{
		tab[size] = (*f)(s[size]);
		++size;
	}
	tab[size] = '\0';
	return (tab);
}
