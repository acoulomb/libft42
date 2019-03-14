/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:02:58 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/13 16:28:39 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(s);
	if (!(dup = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[size] = '\0';
	return (dup);
}
