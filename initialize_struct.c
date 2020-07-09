#include "ft_printf.h"

t_printf		*initialize(char *nformat)
{
	t_printf *data;

	if (!(data = (t_printf *)malloc(sizeof(t_printf))))
		return (NULL);
	data->hash = 0;
	data->zero = 0;
	data->minus = 0;
	data->plus = 0;
	data->space = 0;
	data->asterisk = 0;
	data->width = width_len(nformat);
	data->precision = precision_len(nformat);
	data->decimal = 0;
	data->hh = 0;
	data->h = 0;
	data->l = 0;
	data->ll = 0;
	data->L = 0;
	return (data);
}
