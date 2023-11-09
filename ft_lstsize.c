#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*node;

	node = lst;
	size = 0;
	while (node != NULL)
	{
		size++;
		node = node->next;
	}
	return (size);
}
