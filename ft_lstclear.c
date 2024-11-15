#include "libft.h"
#include <stdio.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *buffer;

	if (!lst || !del)
		return;
	while (*lst)
	{
		buffer = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = buffer;
	}
	*lst = NULL;
}
