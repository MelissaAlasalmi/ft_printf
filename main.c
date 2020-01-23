
#include "libftprintf.h"

int main(int argc, char **argv)
{
	int i;
	
	i = 1;
	if (argc > 1)
	{	
		while (argv[i])
		{
			ft_printf(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}