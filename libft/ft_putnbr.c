/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:29:04 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 00:18:03 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** outputs the integer “n” to the standard output. Uses ft_putchar and ft_putnbr
** (recursively).
*/

#include "libft.h"

void	ft_putnbr(int x)
{
	if (x == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (x >= 0 && x <= 9)
		ft_putchar(x + '0');
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		ft_putchar((x % 10) + '0');
	}
	if (x < 0 && x > -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(x = x * -1);
	}
}
