
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:26:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/22 21:11:29 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	type_d(va_list args, t_printf *data)
{
	char *sign_dec_int;
	int i;

	signed_converter(args, data);
	sign_dec_int = ft_itoa(data->value);
	i = 0;
	if (sign_dec_int[0] == '-' && data->plus == 1)
		data->plus = 0;
	if (data->minus == 1) // left justify!
	{	
		if (data->width > 0 && data->decimal == 0) // if there's only width or no width
		{
			if (data->plus == 1 || data->space == 1) // if we need a plus sign or a space
			{
				if (data->plus == 1)
					ft_pf_putchar('+', data);
				else if (data->space == 1)
					ft_pf_putchar(' ', data);
				data->width--;
			}
			ft_pf_putstr(sign_dec_int, data); // prints even if there's no width
			data->width = data->width - ft_intlen(data->value); // but if there is ...
			if (data->width > 0 && data->zero == 1)
				ft_putzeros(data->width, data);
			else
				ft_putspaces(data->width, data);
		}
		else if (data->width > 0 && data->decimal == 1) // if there's both width and precision
		{
			if (data->precision < (int)ft_strlen(sign_dec_int))
				data->precision = ft_strlen(sign_dec_int);
			if (sign_dec_int[0] == '-') // if value is neg
			{
				ft_pf_putchar('-', data);
				while (sign_dec_int[i] != '\0')
				{
					sign_dec_int[i] = sign_dec_int[i + 1];
					i++;
				}
				data->width--;
				data->precision--;
			}
			if (data->plus == 1 || data->space == 1) // if we need a plus sign or a space
			{
				if (data->plus == 1)
					ft_pf_putchar('+', data);
				else if (data->space == 1)
					ft_pf_putchar(' ', data);
				data->width--;
			}
			data->width = data->width - data->precision;
			data->precision = data->precision - ft_strlen(sign_dec_int);
			ft_putzeros(data->precision, data);
			ft_pf_putstr(sign_dec_int, data);
			ft_putspaces(data->width, data);		
		}
		else // if there's only precision
		{
			if (data->plus == 1) // if we need a plus sign
			{
				ft_pf_putchar('+', data);
				data->precision--;
			}
			else if (data->space == 1) // if we need a space
			{
				ft_pf_putchar(' ', data);
				data->precision--;
			}
			if (sign_dec_int[0] == '-') // if value is neg
			{
				ft_pf_putchar('-', data);
				while (sign_dec_int[i] != '\0')
				{
					sign_dec_int[i] = sign_dec_int[i + 1];
					i++;
				}
				data->precision--;
			}
			data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
			ft_putzeros(data->precision, data);
			ft_pf_putstr(sign_dec_int, data);
			}
		}
	
	else // right justify!
	{
		if (data->width > 0 && data->decimal == 0)  // if there's only width or no width
		{
			if (data->plus == 0 && data->space == 0)
				data->width = data->width - ft_strlen(sign_dec_int);
			else
				data->width = data->width - (ft_strlen(sign_dec_int) + 1);
			if (data->width > 0 && data->zero == 1)
				ft_putzeros(data->width, data);
			else
				ft_putspaces(data->width, data);
			if (sign_dec_int[0] == '-') // if value is neg
			{
				ft_pf_putchar('-', data);
				while (sign_dec_int[i] != '\0')
				{
					sign_dec_int[i] = sign_dec_int[i + 1];
					i++;
				}
			}
			else 
			{
				if (data->plus == 1)
					ft_pf_putchar('+', data);
				else if (data->space == 1)
					ft_pf_putchar(' ', data);
			}
			ft_pf_putstr(sign_dec_int, data);
		}
		else if (data->width > 0 && data->decimal == 1) // if there's both width and precision
		{
			if (data->precision < (int)ft_strlen(sign_dec_int))
				data->precision = ft_strlen(sign_dec_int);
			if (sign_dec_int[0] == '-' || data->plus == 1 || data->space == 1)
				data->width--;
			data->width = data->width - data->precision;
			ft_putspaces(data->width, data);
			if (sign_dec_int[0] == '-') // if value is neg
			{
				ft_pf_putchar('-', data);
				while (sign_dec_int[i] != '\0')
				{
					sign_dec_int[i] = sign_dec_int[i + 1];
					i++;
				}
				data->precision--;
			}
			else // if value is pos
			{
				if (data->plus == 1) // if we need a plus sign
					ft_pf_putchar('+', data);
				else if (data->space == 1) // if we need a space
					ft_pf_putchar(' ', data);
			}
			data->precision = data->precision - ft_strlen(sign_dec_int);
			ft_putzeros(data->precision, data);
			ft_pf_putstr(sign_dec_int, data);		
		}
		else // if there's only precision
		{
			if (sign_dec_int[0] == '-') // if value is neg
			{
				ft_pf_putchar('-', data);
				while (sign_dec_int[i] != '\0')
				{
					sign_dec_int[i] = sign_dec_int[i + 1];
					i++;
				}
			}
			else
			{
				if (data->plus == 1) // if we need a plus sign
					ft_pf_putchar('+', data);
				else if (data->space == 1) // if we need a space
					ft_pf_putchar(' ', data);
			}
			data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
			ft_putzeros(data->precision, data);
			ft_pf_putstr(sign_dec_int, data);
		}
	}
// 	//teststruct_during(data);
}