#include "libft.h"

t_list
	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;

	if (lst == NULL)
		return (NULL);
	new = ft_lstmap(lst->next, f, del);
	elem = ft_lstnew(f(lst->content));
	ft_lstadd_front(&new, elem);
	return (new);
}
