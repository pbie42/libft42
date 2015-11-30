/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:55:03 by pbie              #+#    #+#             */
/*   Updated: 2015/11/26 17:52:09 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (i < n && s1[i])
	{
		j = 0;
		if (i < n && s1[i] == s2[j])
		{
			k = i;
			while (i < n && s1[i] == s1[j])
			{
				if (i < n && s2[j + 1] == '\0')
					return ((char *)s1 + k);
				i++;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
