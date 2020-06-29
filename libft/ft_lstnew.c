/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:11:56 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/10 12:30:51 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” link. The variables content
** and content_size of the new link are initialized by copy of the parameters
** of the function. If the parameter content is nul, the variable content is
** initialized to NULL and the variable content_size is initialized to 0 even
** if the parameter content_size isn’t. The variable next is initialized to
** NULL. If the allocation fails, the function returns NULL. Return value is
** the new link.
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newnode;

	if (!(newnode = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(newnode->content = (void *)malloc(sizeof(content_size))))
			return (NULL);
		newnode->content_size = content_size;
		newnode->content = (void*)content;
		newnode->next = NULL;
	}
	else
	{
		newnode->content_size = 0;
		newnode->content = NULL;
		newnode->next = NULL;
	}
	return (newnode);
}
