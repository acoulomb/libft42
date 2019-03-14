/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 14:15:26 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/13 16:01:42 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int end;

	end = ft_strlen(s);
	while (end + 1)
		if (s[end--] == (char)c)
			return ((char*)(s + end + 1));
	return (NULL);
}
