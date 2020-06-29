/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:39:48 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/11 15:11:15 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long num)
{
	int len;

	len = 1;
	if (num < 0)
	{
		num = num * -1;
		len++;
	}
	while (num / 10 > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}
