/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:37:23 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/16 13:06:27 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*dst1;
	unsigned const char		*src1;

	dst1 = (unsigned char*)dst;
	src1 = (unsigned const char*)src;
	while (n--)
	{
		*(dst1++) = *src1;
		if (*(src1++) == (unsigned char)c)
			return (dst1);
	}
	return (NULL);
}
