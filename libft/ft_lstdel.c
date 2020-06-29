/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:11:56 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:07:51 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the adress of a pointer to a link and frees the memory
** of this link and every successors of that link using the functions del and
** free(3). Finally the pointer to the link that was just freed must be set to
** NULL (quite similar to the function ft_memdel from the mandatory part).
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *ptr;
	t_list *nextnode;

	ptr = *alst;
	while (ptr)
	{
		nextnode = ptr->next;
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = nextnode;
	}
	*alst = NULL;
}
