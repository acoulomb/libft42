/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 22:29:50 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/16 12:17:38 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	end;

	i = 0;
	end = ft_strlen(dst);
	while (src[i] && i < n)
	{
		dst[end + i] = src[i];
		i++;
	}
	dst[end + i] = '\0';
	return (dst);
}
