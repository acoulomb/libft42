/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 19:30:42 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/13 13:12:53 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst1;
	const char	*src1;

	dst1 = (char*)dst;
	src1 = (const char*)src;
	while (n--)
	{
		*dst1 = *src1;
		dst1++;
		src1++;
	}
	return (dst);
}
