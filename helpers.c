#include "ft_printf.h"

int	precision_len(char *nformat)
{
	int precision_len;
	int i;
	precision_len = 0;
	i = 0;

	while (nformat[i] != '\0')
	{
		if (nformat[i] == '.')
		{
			i++;
			while (nformat[i] <=  '0' && nformat[i] >= '9')
				precision_len++;
        }
		else
			i++;
	}
    return(precision_len);
}