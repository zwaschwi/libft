/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:00:43 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/18 16:01:10 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buffer;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		buffer = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = buffer;
	}
	*lst = NULL;
}
