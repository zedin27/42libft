# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 18:13:08 by ztisnes           #+#    #+#              #
#    Updated: 2017/10/09 04:56:34 by ztisnes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

/*
** Iteration of a linked list
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
