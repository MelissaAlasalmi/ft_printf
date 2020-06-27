#include "ft_printf.h"

void		teststruct(t_printf *data)
{
	//flags
    if (data->hash == 1)
        printf("Hash = 1\n");
    else
        printf("Hash = 0\n");
	if (data->zero == 1)
        printf("Zero = 1\n");
    else
        printf("Zero = 0\n");
    if (data->minus == 1)
        printf("Minus = 1\n");
    else
        printf("Minus = 0\n");
    if (data->plus == 1)
        printf("Plus = 1\n");
    else
        printf("Plus = 0\n");
    if (data->space == 1)
        printf("Space = 1\n");
    else
        printf("Space = 0\n");

	//width
    if (data->asterisk == 1)
        printf("Asterisk = 1\n");
    else
        printf("Asterisk = 0\n");

	//precision
    if (data->decimal == 1)
        printf("Decimal = 1\n");
    else
        printf("Decimal = 0\n");

	//length
    if (data->hh == 1)
        printf("hh = 1\n");
    else
        printf("hh = 0\n");
    if (data->h == 1)
        printf("h = 1\n");
    else
        printf("h = 0\n");
    if (data->l == 1)
        printf("l = 1\n");
    else
        printf("l = 0\n");
    if (data->ll == 1)
        printf("ll = 1\n");
    else
        printf("ll = 0\n");
    if (data->L == 1)
        printf("L = 1\n");
    else
        printf("L = 0\n");
}