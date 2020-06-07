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
	printf("\n");

	/*
 	** ****************** Simple string with two % ******************
 	*/
 	printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES AND TWO PERCENT SIGNS\n");
	printf("printf: %% hello\n");
	ft_printf("ft_printf: %% hello\n");
	printf("\n");

	/*
 	** ****************** Simple string with %c flag ******************
 	*/
 	printf("SIMPLE STRING WITH c FLAG\n");
	printf("printf: %c\n", c);
	ft_printf("ft_printf: %c\n", c);
	printf("\n");

	/*
 	** ****************** Simple string with %s flag ******************
 	*/
 	printf("SIMPLE STRING WITH s FLAG\n");
	printf("printf: %s\n", str);
	ft_printf("ft_printf: %s\n", str);
	printf("\n");

	/*
 	** ****************** Simple string with %p flag ******************
 	*/
 	printf("SIMPLE STRING WITH p FLAG\n");
	printf("printf: %p\n", str);
	ft_printf("ft_printf: %p\n", str);
	printf("\n");

	/*
 	** ****************** Simple string with %d flag ******************
 	*/
 	printf("SIMPLE STRING WITH d FLAG\n");
	printf("printf: %d\n", -12443);
	ft_printf("ft_printf: %d\n", -12443);
	printf("\n");

		/*
 	** ****************** Simple string with %d flag ******************
 	*/
 	printf("SIMPLE STRING WITH d FLAG\n");
	printf("printf: %i\n", 12443);
	ft_printf("ft_printf: %i\n", 12443);
	printf("\n");

	return (0);
}
