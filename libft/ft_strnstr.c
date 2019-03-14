/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:47:08 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/13 16:55:46 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char*)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == str[i] && i < len)
		{
			i++;
			j++;
			if (!to_find[j])
				return ((char*)&str[i - j]);
			if (to_find[j] != str[i])
			{
				i = i - j;
				j = 0;
				break ;
			}
		}
		i++;
	}
	return (NULL);
}
