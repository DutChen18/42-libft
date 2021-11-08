#include "libft.h"

t_list
	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*content;

	if (FT_SAFE >= 1 && lst == NULL)
		return (NULL);
	content = f(lst->content);
	new = ft_lstnew(content);
	if (lst->next != NULL)
		new->next = ft_lstmap(lst->next, f, del);
	return (new);
}
