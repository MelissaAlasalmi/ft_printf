/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:48:12 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/14 16:19:09 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

long double		addfive(long double value, t_printf *data)
{
	int			i;
	long double	five;

	i = 0;
	five = 0.5;
	while (i < data->precision)
	{
		five /= 10;
		i++;
	}
	return (value + five);
}

char			*roundup(long double postdecimal, int start, char *str, t_printf *data)
{
	int			i;

	i = 0;
	while (i < data->precision)
	{
		postdecimal = 10;
		str[i + start] = (intmax_t)postdecimal + '0';
		postdecimal--;
		i++;
	}
	str[i + start] = '\0';
	return (str);
}

char			*ft_ftoa(t_printf *data)
{
	int			i;
	intmax_t	predecimal;
	long double	postdecimal;
	char		*str;
	char		*temp;

	if (data->ldvalue < 0)
		data->ldvalue = data->ldvalue * -1;
	data->ldvalue = addfive(data->ldvalue, data);
	predecimal = (intmax_t)data->ldvalue;
	temp = ft_itoa(predecimal);
	postdecimal = data->ldvalue - (long double)predecimal;
	if (!(str = malloc(sizeof(char) * ft_strlen(temp) + data->precision + 2)))
		return (NULL);
	str = ft_strcpy(str, temp);
	free(temp);
	if (data->precision > 0 || data->hash == 1)
	{
		i = ft_strlen(str);
		str[i] = '.';
		i++;
		return (roundup(postdecimal, i, str, data));
	}
	return (str);
}