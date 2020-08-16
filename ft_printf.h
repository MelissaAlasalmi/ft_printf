/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:39 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/16 10:43:40 by Melissa          ###   ########.fr       */
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
	int			hash;
	int			zero;
	int			minus;
	int			plus;
	int			space;
	int			width;
	int			asterisk;
	int			precision;
	int			decimal;
	int			hh;
	int			h;
	int			l;
	int			ll;
	int			L;
	int			printf;
	char		*nformat;
	int			ivalue;
	long		lvalue;
	long long	llvalue;
	long double ldvalue;
	int 		sign;
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
t_printf	*output(va_list args, t_printf *data);
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
void		type_f(va_list args, t_printf *data);
void		ft_putspaces(int d, t_printf *data);
void		ft_putzeros(int d, t_printf *data);
void		ft_pf_toupper(char *base, t_printf *data);
char 		*signed_converter(va_list args, t_printf *data);
char		*unsigned_converter(va_list args, t_printf *data, int base);
char		*ft_ftoa(long double fvalue, int precision);

#endif