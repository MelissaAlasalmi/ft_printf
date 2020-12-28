/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:25:39 by malasalm          #+#    #+#             */
/*   Updated: 2020/08/17 13:55:13 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BLACK				"\033[0:30m"
# define RED 				"\033[0;31m"
# define GREEN 				"\033[0;32m"
# define YELLOW 			"\033[0;33m"
# define BLUE 				"\033[0;34m"
# define MAGENTA 			"\033[0;35m"
# define CYAN 				"\033[0;36m"
# define WHITE				"\033[0:37m"
# define RESET 				"\033[0m"

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef	struct	s_printf
{
	int			hash;
	int			zero;
	int			minus;
	int			plus;
	int			space;
	int			width;
	int			precision;
	int			decimal;
	int			hh;
	int			h;
	int			l;
	int			ll;
	int			upperl;
	int			printf;
	char		*nformat;
	int			ivalue;
	long		lvalue;
	long long	llvalue;
	long double ldvalue;
	int			sign;
}				t_printf;

int				ft_printf(const char *restrict format, ...);
t_printf		*initialize(void);
void			re_initialize(t_printf *data);
t_printf		format_to_struct(t_printf *data);
void			output(va_list args, t_printf *data);
void			ft_pf_putchar(char c, t_printf *data);
void			ft_pf_putstr(char *str, t_printf *data);
void			type_c(va_list args, t_printf *data);
void			type_s(va_list args, t_printf *data);
void			type_p(va_list args, t_printf *data);
void			type_d(va_list args, t_printf *data);
void			type_i(va_list args, t_printf *data);
void			type_o(va_list args, t_printf *data);
void			type_u(va_list args, t_printf *data);
void			type_upperx(va_list args, t_printf *data);
void			type_lowerx(va_list args, t_printf *data);
void			type_f(va_list args, t_printf *data);
void			type_b(va_list args, t_printf *data);
void			ft_putspaces(int d, t_printf *data);
void			ft_putzeros(int d, t_printf *data);
char			*ft_putsign(t_printf *data, char *valuestr);
char			*signed_converter(va_list args, t_printf *data);
char			*unsigned_converter(va_list args, t_printf *data, int base);
char			*float_converter(va_list args, t_printf *data);
char			*ft_ftoa(long double fvalue, int precision);
void		teststruct(t_printf *data);

#endif
