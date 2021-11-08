#include "libft.h"
#include <stdlib.h>

t_list
	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(*lst));
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
