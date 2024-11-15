#include "libft.h"
#inlcude <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buffer;

	if (!lst || !new)
		return (NULL);
	if (*lst == NULL)
		*lst =new;
	else
	{
		buffer = *lst;
		while (buffer->next)
			buffer = buffer->next;
		buffer->next = new;
	}
}
