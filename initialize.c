#include "ft_printf.h"

t_printf		*initialize(char *nformat)
{
	t_printf *data;

	if (!(data = (t_printf *)malloc(sizeof(t_printf))))
		return (NULL);

	//flags
	data->hash = 0;
	data->zero = 0;
	data->minus = 0;
	data->plus = 0;
	data->space = 0;

	//width
	data->asterisk = 0;
	data->width = width_len(nformat);

	//precision
	data->precision = precision_len(nformat);
	data->decimal = 0;

	//length
	data->hh = 0;
	data->h = 0;
	data->l = 0;
	data->ll = 0;
	data->L = 0;

	// //conversions
	// data->c = 0;
	// data->s = 0;
	// data->p = 0;
	// data->d = 0;
	// data->i = 0;
	// data->o = 0;
	// data->u = 0;
	// data->x = 0;
	// data->X = 0;
	// data->f = 0;

	return (data);
}
