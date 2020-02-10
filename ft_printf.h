# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
#include "libft/libft.h"

typedef	struct	s_printf
{
	//flags
	int			hash;
	int			zero;
	int			minus;
	int			plus;
	int			space;

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
void 		formatparser(char *nformat, va_list args);
t_printf	conversions(char *nformat);

#endif