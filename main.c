#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char c;
	char *str;
	int i;

	str = "hello";
	i = 0;

	c = str[i];
	/*
 	** ****************** Simple string without any variables ******************
 	*/
 	printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES\n");
	printf("printf: hello\n");
	ft_printf("ft_printf: hello\n");

	/*
 	** ****************** Simple string with two % ******************
 	*/
 	printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES AND TWO PERCENT SIGNS\n");
	printf("printf: %% hello\n");
	ft_printf("ft_printf: %% hello\n");

	/*
 	** ****************** Simple string with flags ******************
 	*/
 	printf("TEST STRUCT\n");
	ft_printf("ft_printf: %#hh%");
	
	/*
 	** ****************** Simple string with %c flag ******************
 	*/
 	printf("SIMPLE STRING WITH c FLAG\n");
	printf("%c\n", c);
	ft_printf("%c\n", c);

	return (0);
}
