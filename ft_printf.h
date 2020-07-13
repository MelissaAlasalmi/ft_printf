/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:39 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/13 14:34:33 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h> //REMOVE!!!
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
#include "libft/libft.h"

typedef	struct	s_printf
{
	int			hash; // For f flag, the output will always contain a decimal point even if the fractional part of the number is zero. For o, x, X flags: 0, 0x, 0X are added to the front of the number.
	int			zero; // When the 'width' is specified, adds the 'widths' amount of zeros in front of the number (operates only on numbers)
	int			minus; // Left-aligns the output (operates on all types)
	int			plus; // Adds a plus to the start of numbers when positive. (operates only on numeric types)
	int			space; // Adds a space to the start of numbers when positive... unless there is a plus! (operates only on numeric types)
	int			width; //The minimum number of characters to allocate for the output.
	int			asterisk; //The precision is specified in an integer argument to printf preceding the number to be formatted. (operates on all types)
	int			precision; // The minimum number of characters to be output, padded on the left with 0’s if necessary.
	int			decimal; // For floats, specifies the maximum number of ints to output after a decimal point to the right of a number. The output is rounded.
	int			hh; // +d = signed char, +i = signed char, +o = unsigned char, +u = unsigned char, +x = unsigned char, +X = unsigned char
	int			h; //+d = signed short, +i = signed short, +o = unsigned short, +u = unsigned short, +x = unsigned short, +X = unsigned short
	int			l; // +d = long, +i = long, +o = unsigned long, +u = unsigned long, +x = unsigned long, +X = unsigned long
	int			ll; // +d = long long, +i = long long, +o = unsigned long long, +u = unsigned long long, +x = unsigned long long, +X = unsigned long long
	int			L;
	int			printf;
	char		*nformat;
}				t_printf;
void		teststruct_before(t_printf *data);
void		teststruct_during(t_printf *data);
void		teststruct_after(t_printf *data, int returnvalue);
int 		ft_printf(const char *restrict format, ...);
int			ft_preparser(t_printf *data, va_list args);
void 		ft_percentparser(t_printf *data, va_list args);
void 		ft_parser(char c, t_printf *data, va_list args);
int		 	ft_flagparser(t_printf *data, va_list args);
int		 	ft_typeparser(t_printf *data, va_list args);
t_printf	*initialize(void);
void		re_initialize(t_printf *data);
void 		length(char flag, t_printf *data);
void		amplifiers(char flag, t_printf *data);
t_printf 	format_to_struct(t_printf *data);
t_printf	output(va_list args, t_printf *data);
void		ft_pf_putchar(char c, t_printf *data);
void		ft_pf_putstr(char *str, t_printf *data);
void		type_c(va_list args, t_printf *data);
void		type_s(va_list args, t_printf *data);
void		type_p(va_list args, t_printf *data);
void		type_d(va_list args, t_printf *data);
void		type_i(va_list args, t_printf *data);
void		type_o(va_list args, t_printf *data);
void		type_u(va_list args, t_printf *data);
void		type_x(va_list args, t_printf *data);
void		type_X(va_list args, t_printf *data);
//void		type_f(va_list args, t_printf *data);

#endif