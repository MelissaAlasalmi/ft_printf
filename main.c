#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{

	char *str;
	str = "hello";

	/*
 	** ****************** Simple string without any variables ******************
 	*/
 	// printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES\n");
	// printf("printf: hello\n");
	// ft_printf("ft_printf: hello\n");

	/*
 	** ****************** Simple string with two % ******************
 	*/
 	// printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES AND TWO PERCENT SIGNS\n");
	// printf("printf: %% hello\n");
	// ft_printf("ft_printf: %% hello\n");

	/*
 	** ****************** Simple string with two % ******************
 	*/
 	printf("TEST STRUCT\n");
	ft_printf("ft_printf: %#hhc%");
	
	/*
 	** ****************** Simple string with %s flag ******************
 	*/
 	// printf("SIMPLE STRING WITH S FLAG\n");
	// printf("%s\n", str);
	// ft_printf("%x\n", str);

	return (0);
}
