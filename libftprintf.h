# ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>
#include "libft/libft.h"

typedef	struct	s_struct
{
	int			zero;
	int			plus;
	int			minus;
	int			space;
	int			hash;
	int			dot;
	int			prc;
	int			star;
	int			fieldwidth;
	int			len;
	int			c;
	int			d;
	int			o;
	int			s;
	int			x;
	int			p;
	char		*ptr;
}				t_printf;

int 		ft_printf(const char *restrict format, ...);
void 		formatparser(char *nformat);
t_printf	conversions(char *nformat);

#endif