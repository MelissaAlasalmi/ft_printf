#include "ft_printf.h"

int	main(void)
{
	long double floatf = 3423.34325;
	printf("%.5Lf\n", floatf);
	ft_printf("%.5f\n", floatf);
	return (0);
}
