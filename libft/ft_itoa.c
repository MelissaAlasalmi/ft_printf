/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:39:48 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 12:15:33 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL. Uses
** ft_strdup, ft_strjoin, and ft_itoa (recursively).
*/

#include "libft.h"

char	*ft_itoa(long long n)
{
	char		*str;
	long long	num;
	int			i;

	num = n;
	i = ft_intlen(num);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = 48;
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		str[i] = n < 0 ? 48 - (n % 10) : 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}
