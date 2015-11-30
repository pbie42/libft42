/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:25:37 by pbie              #+#    #+#             */
/*   Updated: 2015/11/26 17:50:24 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			k = i;
			while (s1[i++] == s2[j++])
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1 + k);
			}
			i = k;
		}
		i++;
	}
	return (NULL);
}
