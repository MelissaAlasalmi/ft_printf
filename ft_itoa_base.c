
#include "ft_printf.h"

int find_quotient(long value, long basestart, int quotient)
{
    while (value >= basestart)
    {
        quotient++;
        value = value - basestart;
    }
    return(quotient);
}

long find_basestart(long value, int base, long basestart)
{
    while (value > (basestart * base))
        basestart = basestart * base;
    return(basestart);
}

char	*ft_itoa_base(long value, int base)
{
	char	*str;
	int		i;
    long    basestart;
    int     quotient;

	i = ft_intlen(value);
    basestart = 1;
    quotient = 0;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i = 0;
    if (value == 0)
		str[0] = '0';
	else if (value < 0)
    {
		str[0] = '-';
        i = 1;
    }
    else
        find_basestart(value, base, basestart);
	while (value >= 0 && basestart > 0)
	{
        if (value < basestart)
		    str[i] = '0';
        else
        {
            find_quotient(value, basestart, quotient);
            str[i] = quotient <= 9 ? '0' + quotient : 'a' + (quotient % 10);
        }
        basestart = (basestart / base); 
        quotient = 0;
        i++;
	}
	return (str);
}