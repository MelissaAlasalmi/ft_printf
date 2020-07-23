
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

// Covers { 0, -, space, width value, + , hh, h, l , ll, L} 
// To go: {., precision value}

void	type_d(va_list args, t_printf *data)
{
	char *sign_dec_int;
	int i;

	signed_converter(args, data);
	sign_dec_int = ft_itoa(data->value);
	i = 0;

	if (sign_dec_int[0] == '-' && data->plus == 1)
		data->plus = 0;
	if (data->decimal == 1 && data->precision == 0) // cancel out precision if it's zero
		data->decimal = 0;


	if (data->minus == 1) // left justify!
	{	
		if (data->decimal == 0) // if there's only width or no width
		{
			if (data->plus == 1) // if we need a plus sign
			{
				ft_pf_putchar('+', data);
				data->width--;
			}
			else if (data->space == 1) // if we need a space
			{
				ft_pf_putchar(' ', data);
				data->width--;
			}
			ft_pf_putstr(sign_dec_int, data);
			data->width = data->width - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
			if (data->width > 0 && data->zero == 1)
				ft_putzeros(data->width, data);
			else
				ft_putspaces(data);
		}
		// else if (data->width > 0 && data->decimal == 1) // if there's width and precision
		// {
		// 	if (data->plus == 1) // if we need a plus sign
		// 	{
		// 		ft_pf_putchar('+', data);
		// 		data->width--;
		// 	}
		// 	else if (data->space == 1) // if we need a space
		// 	{
		// 		ft_pf_putchar(' ', data);
		// 		data->width--;
		// 	}
		// 	if (sign_dec_int[0] == '-') // if value is neg
		// 	{
		// 		ft_pf_putchar('-', data);
		// 		data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
		// 		ft_putzeros(data->precision, data);
		// 		ft_pf_putstr(&sign_dec_int[1], data);
		// 	}
		// 	else
		// 	{
		// 		ft_pf_putstr(sign_dec_int, data);
		// 		data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
		// 		ft_putzeros(data->precision, data);
		// 	}	
		// }
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
					sign_dec_int[i] = sign_dec_int[i + 1];
				data->precision--;
			}
			data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
			ft_putzeros(data->precision, data);
			ft_pf_putstr(sign_dec_int, data);
			}
		}
	
	else // right justify!
	{
		if (data->width > 0 || data->decimal == 1) // if there's width, precision, or both
		{
			if (data->plus == 1 || data->space == 1) // if we need a plus sign or a space
			{
				data->width = data->width - (ft_strlen(sign_dec_int) + 1);
				if (data->zero == 1 && data->plus == 1) // if there's a zero and a plus
					ft_pf_putchar('+', data);
				if (data->zero == 1) // if there's a zero
					ft_putzeros(data->width, data);
				else
					ft_putspaces(data);
				if (data->plus == 1 && data->zero == 0)
					ft_pf_putchar('+', data);
				else if (data->space == 1)
					ft_pf_putchar(' ', data);
			}
			else // if we DO NOT need a plus sign or a space
			{
				data->width = data->width - ft_strlen(sign_dec_int);
				if (data->zero == 1)
					ft_putzeros(data->width, data);
				else
					ft_putspaces(data);
			}
			ft_pf_putstr(sign_dec_int, data);
		}
		else if (data->width > 0 && data->decimal == 1) // if there's width and precision
		{
			if (data->plus == 1) // if we need a plus sign
			{
				ft_pf_putchar('+', data);
				data->width--;
			}
			else if (data->space == 1) // if we need a space
			{
				ft_pf_putchar(' ', data);
				data->width--;
			}
			if (sign_dec_int[0] == '-') // if value is neg
			{
				ft_pf_putchar('-', data);
				data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
				ft_putzeros(data->precision, data);
				ft_pf_putstr(&sign_dec_int[1], data);
			}
			else
			{
				ft_pf_putstr(sign_dec_int, data);
				data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
				ft_putzeros(data->precision, data);
			}	
		}
		else if  (data->decimal == 1) // if there's only precision
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
				data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
				ft_putzeros(data->precision, data);
				ft_pf_putstr(&sign_dec_int[1], data);
			}
				else
				{
					data->precision = data->precision - ft_strlen(sign_dec_int); //now we have the leftovers to deal with ...
					ft_putzeros(data->precision, data);
					ft_pf_putstr(sign_dec_int, data);
				}
			}
		else // if there's no width or precision but there is a plus or a space
		{
			if (data->plus == 1)
				ft_pf_putchar('+', data);
			else if (data->space == 1)
				ft_pf_putchar(' ', data);
			ft_pf_putstr(sign_dec_int, data);
		}
	}
// 	//teststruct_during(data);
}