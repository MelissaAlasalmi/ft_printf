#include "includes/libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list *lst;

	lst = *alst;

	if (lst)
	{
		while (lst->next)
			lst = lst->next;
		lst->next = new;
	}
	else
		*alst = new;
}