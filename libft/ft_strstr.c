/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:56:13 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/23 10:58:39 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	if (!*to_find)
		return ((char*)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == str[i])
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
