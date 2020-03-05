#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{

	char *str;
	str = "hello";

	/*
 	** ****************** Simple string without any variables ******************
 	*/
 	printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES\n");
	printf("hello\n");
	ft_printf("hello\n");
	
	/*
 	** ****************** Simple string with %s flag ******************
 	*/
 	printf("SIMPLE STRING WITH S FLAG\n");
	printf("%s\n", str);
	ft_printf("%x\n", str);

	return (0);
}
