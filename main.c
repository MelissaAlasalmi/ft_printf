#include "ft_printf.h"

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
 	** ****************** Simple string with %i flag ******************
 	*/
 	printf("SIMPLE STRING WITH i FLAG\n");
	printf("printf: %i\n", 12443);
	ft_printf("ft_printf: %i\n", 12443);
	printf("\n");

		/*
 	** ****************** Simple string with %o flag ******************
 	*/
 	printf("SIMPLE STRING WITH o FLAG\n");
	printf("printf: %o\n", 12443);
	ft_printf("ft_printf: %o\n", 12443);
	printf("\n");

		/*
 	** ****************** Simple string with %u flag ******************
 	*/
 	printf("SIMPLE STRING WITH u FLAG\n");
	printf("printf: %i\n", 12443);
	ft_printf("ft_printf: %i\n", 12443);
	printf("\n");

		/*
 	** ****************** Simple string with %x flag ******************
 	*/
 	printf("SIMPLE STRING WITH x FLAG\n");
	printf("printf: %x\n", 12443);
	ft_printf("ft_printf: %x\n", 12443);
	printf("\n");

		/*
 	** ****************** Simple string with %X flag ******************
 	*/
 	printf("SIMPLE STRING WITH X FLAG\n");
	printf("printf: %X\n", 12443);
	ft_printf("ft_printf: %X\n", 12443);
	printf("\n");

		/*
 	** ****************** Simple string with %f flag ******************
 	*/
 	printf("SIMPLE STRING WITH f FLAG\n");
	printf("printf: %f\n", 12443.0009);
	ft_printf("ft_printf: %f\n", 12443.0009);
	printf("\n");

		/*
 	** ****************** Simple string with %d flag + extra text ******************
 	*/
 	printf("SIMPLE STRING WITH d flag + extra text\n");
	printf("this %d number %d\n", 17, 18);
	ft_printf("this %d number %d\n", 17, 18);
	printf("\n");

		/*
 	** ****************** TEST PRECISION STRUCT ******************
 	*/
 	printf("TEST PRECISION STRUCT\n");
	printf("this %060d\n", 187378823);
	ft_printf("this %0436.566d\n", 18);
	printf("\n");

	/*
 	** ****************** Simple string with %c flag with width ******************
 	*/
 	printf("SIMPLE STRING WITH c FLAG WITH WIDTH\n");
	printf("printf: %5c\n", c);
	ft_printf("ft_printf: %05.5c\n", c);
	printf("\n");

	return (0);
}
