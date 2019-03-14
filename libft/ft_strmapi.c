/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 12:26:08 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/16 22:57:42 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	char	*tab;

	size = 0;
	if (!s)
		return (NULL);
	while (s[size])
		size++;
	if (!(tab = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	size = 0;
	while (s[size])
	{
		tab[size] = (*f)(size, s[size]);
		++size;
	}
	tab[size] = '\0';
	return (tab);
}
