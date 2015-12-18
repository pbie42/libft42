/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:31:51 by pbie              #+#    #+#             */
/*   Updated: 2015/12/14 17:28:47 by pbie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstaddend(t_list **alst, t_list *new)
{
	t_list		*tmp;

	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = NULL;
	tmp = new;
}
