#include "libft.h"

void
	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (FT_SAFE >= 1 && lst == NULL)
		return ;
	f(lst->content);
	if (lst->next != NULL)
		ft_lstiter(lst->next, f);
}
