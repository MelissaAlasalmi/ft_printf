
// Write a function that converts an integer value to a null-terminated string
// using the specified base and stores the result in a char array that you must
// allocate.

// The base is expressed as an integer, from 2 to 16. The characters comprising
// the base are the digits from 0 to 9, followed by uppercase letter from A to F.

// For example, base 4 would be "0123" and base 16 "0123456789ABCDEF".

// If base is 10 and value is negative, the resulting string is preceded with a
// minus sign (-). With any other base, value is always considered unsigned.

#include "ft_printf.h"

char	*ft_itoa_base(int value, int base)
{
	char	*str;
	int		i;
    int     basestart;
    int     modulo;

	i = ft_intlen((long)value);
    basestart = 1;
    modulo = 0;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i = 0;
	if (value == 0)
		str[0] = 48;
	if (value < 0)
        {
		str[0] = '-';
        i = 1;
        }
	while (value != 0)
	{
        while (value > (basestart * base))
            basestart = basestart * base;
        while (value >= basestart)
        {
            modulo++;
            value = value - basestart;
        }
		str[i] = modulo < 9 ? 48 + modulo : 48 + ((modulo % 10) + 17);
		modulo = 0;
        basestart = 1;
		i++;
	}
    ft_putstr(str);
    write(1, "\n", 1);
	return (str);
}

int main(void)
{
    int value;
    int base;
    value = 131071;
    base = 16;
    ft_itoa_base(value, base);
    return (0);
}