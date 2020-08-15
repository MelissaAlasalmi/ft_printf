#include "ft_printf.h"

int	main(void)
{
	long double floatf = 3423.34325;
	ft_printf("%Lf\n", floatf);
	return (0);
}
