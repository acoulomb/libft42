/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 19:36:36 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/23 12:09:57 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			size;
	long int	nb;
	int			sign;
	char		*tab;

	size = ft_intlen(n);
	nb = (long int)n;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		nb = -nb;
	}
	if (!(tab = (char*)ft_memalloc(sizeof(char) * (size + sign + 1))))
		return (NULL);
	while ((size + sign) >= sign)
	{
		tab[size + sign - 1] = (nb % 10) + '0';
		nb = nb / 10;
		size--;
	}
	if (n < 0)
		tab[0] = '-';
	return (tab);
}
