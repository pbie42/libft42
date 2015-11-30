/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:50:08 by pbie              #+#    #+#             */
/*   Updated: 2015/11/24 21:14:17 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (c == '\0')
	{
		i = ft_strlen(s) + 1;
		return ((char *)&s[i]);
	}
	while (s[i])
	{
		if (s[i] == c)
			k = i;
		i++;
	}
	if (s[k] == c)
		return ((char *)&s[k]);
	return (NULL);
}
