#include "libft.h"

void
	ft_listiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	f(lst->content);
	ft_listiter(lst->next, f);
}
