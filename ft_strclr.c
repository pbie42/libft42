/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:15:59 by pbie              #+#    #+#             */
/*   Updated: 2015/11/27 18:19:03 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	unsigned int	i;

	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
}
