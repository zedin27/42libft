/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 00:48:53 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/09 02:13:23 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Hello
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;

	while(*alst)
	{
		node = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = node;
	}
}
