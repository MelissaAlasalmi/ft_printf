# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
#include "libft/libft.h"

typedef	struct	s_printf
{
	//flags
	int			hash; // Alternates. For f flag, the output will always contain a decimal point. For o, x, and X flags, the texts 0, 0x, and 0X are added to non-zero numbers.
	int			zero; //When the 'width' is specified, adds the width amount of zeros in front of numeric types
	int			minus; //specifies left adjustment of the onverted argument
	int			plus; //adds a plus for positive or a minus for negative-signed numeric types
	int			space; //adds a space for positive signed-numeric types, unless there is a plus!

	//width
	int			asterisk;

	//precision
	int			decimal;

	//length
	int			hh;
	int			h;
	int			l;
	int			ll;
	int			L;

	//conversions
	int			c;
	int			s;
	int			p;
	char		*ptr;
	int			d;
	int			i;
	int			o;
	int			u;
	int			x;
	int			X;
	int			f;
	int			percent;	
}				t_printf;

int 		ft_printf(const char *restrict format, ...);
t_printf	*initialize(char *ptr);
void 		length(char *next, t_printf *data);
void 		format_parser(char next, t_printf *data);
void		conversion_parser(char next, t_printf *data);
void		output(t_printf *data, va_list args);

#endif