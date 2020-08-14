#include "ft_printf.h"

int	main(void)
{
	double floatf = 3423.34325;
	printf("printfs long double:%f\n", floatf);
	ft_printf("original long double:%f\n", floatf);
	return (0);
}
