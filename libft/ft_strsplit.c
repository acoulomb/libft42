/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 12:34:54 by acoulomb          #+#    #+#             */
/*   Updated: 2018/04/18 13:22:08 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_fill(char **tab, const char *s, char c, size_t len)
{
	size_t count;
	size_t wordlen;
	size_t i;

	count = 0;
	i = 0;
	while (count < len)
	{
		wordlen = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			wordlen++;
			i++;
		}
		if (!(tab[count] = ft_strndup(&s[i - wordlen], wordlen)))
			return (0);
		count++;
	}
	tab[count] = NULL;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		len;

	if (!s)
		return (NULL);
	len = ft_count_words(s, c);
	if (!(tab = ((char**)malloc(sizeof(char*) * (len + 1)))))
		return (NULL);
	if (ft_fill(tab, s, c, len))
		return (tab);
	return (tab);
}
