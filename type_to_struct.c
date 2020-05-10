// a data struct is taken by the conversion function and 
// passed into each individual conversion to be processed into an 
// output.

#include "ft_printf.h"

void	type_diouxX(char c, t_printf *data)
{
	if (c == 'd')
		data->d = 1;
	else if (c == 'i')
		data->i = 1;
	else if (c == 'o')
		data->o = 1;
	else if (c == 'u')
		data->u = 1;
	else if (c == 'x')
		data->x = 1;
	else if (c == 'X')
		data->X = 1;
}
void	type_csp(char c, t_printf *data)
{
	if (c == 'c')
		data->c = 1;
	else if (c == 's')
		data->s = 1;
	else if (c == 'p')
		data->p = 1;
}
void	type_to_struct(char c, t_printf *data)
{
	if (c == 'c' || c == 's' || c == 'p')
		type_csp(c, data);
	else if (c == 'd' || c == 'i' || c == 'o' ||
	c == 'u' || c == 'x' || c == 'X')
		type_diouxX(c, data);
	else if (c == 'f')
		data->f = 1;
}
