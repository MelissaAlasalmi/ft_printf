/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:48:12 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/17 15:00:24 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*stack_prec(int prec, long double fval, long long val, char *after)
{
	int i;

	i = 0;
	after[i] = '.';
	i++;
	while (prec > 0)
	{
		fval = fval * 10;
		val = fval;
		fval = fval - val;
		after[i] = val + '0';
		i++;
		prec--;
	}
	after[i] = '\0';
	return (after);
}

static char	*neg_zero(char *before)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	temp = before;
	before = ft_strnew(ft_strlen(before) + 1);
	before[i] = '-';
	i++;
	while (temp[j] != '\0')
	{
		before[i] = temp[j];
		i++;
		j++;
	}
	return (before);
}

long double	rounding(long double fval, int prec)
{
	long double	rounded;
	int			dec;

	rounded = 0.5;
	dec = 0;
	if (fval < 0)
		rounded = rounded * -1;
	while (dec < prec)
	{
		rounded = rounded / 10.0;
		dec++;
	}
	return (rounded);
}

char		*ft_ftoa(long double fval, int prec)
{
	long long			val;
	char				*before;
	char				*after;
	char				*str;
	int					i;

	i = 0;
	fval = fval + rounding(fval, prec);
	val = fval;
	before = ft_itoa(val);
	if (fval < 0 && before[i] != '-')
		before = neg_zero(before);
	fval = prec ? (fval - val) : 0;
	fval *= (fval < 0) ? -1 : 1;
	after = ft_strnew(prec + 2);
	if (prec > 0)
		after = stack_prec(prec, fval, val, after);
	else
		after[i] = '\0';
	str = ft_strjoin(before, after);
	free(after);
	free(before);
	return (str);
}
