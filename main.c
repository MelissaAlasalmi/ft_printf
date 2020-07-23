#include "ft_printf.h"

int	main(void)
{
	char c;
	char *str;
	int i;

	str = "hello";
	i = 0;
	c = str[i];

	// /*
 	// ** ****************** Simple string without any variables ******************
 	// */
 	// printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES\n");
	// printf("printf: hello\n");
	// ft_printf("ft_printf: hello\n");
	// printf("\n");

	// /*
 	// ** ****************** Simple string with two % ******************
 	// */
 	// printf("SIMPLE STRING TEST WITHOUT ANY VARIABLES AND TWO PERCENT SIGNS\n");
	// printf("printf:%%\n");
	// ft_printf("ft_printf:%%\n");
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %c flag ******************
 	// */
 	// printf("SIMPLE STRING WITH c FLAG\n");
	// printf("printf:%c\n", c);
	// ft_printf("ft_printf:%c\n", c);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %s flag ******************
 	// */
 	// printf("SIMPLE STRING WITH s FLAG\n");
	// printf("printf:%s\n", str);
	// ft_printf("ft_printf:%s\n", str);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %p flag ******************
 	// */
 	// printf("SIMPLE STRING WITH p FLAG\n");
	// printf("printf:%p\n", str);
	// ft_printf("ft_printf:%p\n", str);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %i flag ******************
 	// */
 	// printf("SIMPLE STRING WITH i FLAG\n");
	// printf("printf:%i\n", 12443);
	// ft_printf("ft_printf:%i\n", 12443);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %o flag ******************
 	// */
 	// printf("SIMPLE STRING WITH o FLAG\n");
	// printf("printf:%o\n", 12443);
	// ft_printf("ft_printf:%o\n", 12443);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %u flag ******************
 	// */
 	// printf("SIMPLE STRING WITH u FLAG\n");
	// printf("printf:%i\n", 12443);
	// ft_printf("ft_printf:%i\n", 12443);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %x flag ******************
 	// */
 	// printf("SIMPLE STRING WITH x FLAG\n");
	// printf("printf:%x\n", 12443);
	// ft_printf("ft_printf:%x\n", 12443);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %X flag ******************
 	// */
 	// printf("SIMPLE STRING WITH X FLAG\n");
	// printf("printf:%X\n", 12443);
	// ft_printf("ft_printf:%X\n", 12443);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %f flag ******************
 	// */
 	// printf("SIMPLE STRING WITH f FLAG\n");
	// printf("printf:%f\n", 12443.0009);
	// ft_printf("ft_printf:%f\n", 12443.0009);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %c flag with width ******************
 	// */
 	// printf("SIMPLE STRING WITH c FLAG WITH WIDTH\n");
	// printf("printf:%5c\n", c);
	// ft_printf("ft_printf:%5c\n", c);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %s flag with width ******************
 	// */
 	// printf("SIMPLE STRING WITH s FLAG WITH WIDTH\n");
	// printf("printf:%9s\n", str);
	// ft_printf("ft_printf:%9s\n", str);
	// printf("\n");

	// /*
	// ** ****************** String with fieldwidth ******************
 	// */
	// printf("String with fieldwidth\n");
	// printf("printf:%2s\n", "dfgdfgdfgd");
	// ft_printf("ft_printf:%2s\n", "dfgdfgdfgd");
	// printf("\n");

	// 	/*
 	// ** ****************** STRING WITH 2 x s FLAG & WIDTH ******************
 	// */
 	// printf("STRING WITH 2 x s FLAG & WIDTH\n");
	// printf("printf:%11s%11s\n", str, str);
	// ft_printf("ft_printf:%11s%11s\n", str, str);
	// printf("\n");

	// 		/*
 	// ** ****************** STRING WITH a shitload of width and chars ******************
 	// */
 	// printf("STRING WITH a shitload of width and chars\n");
	// printf("printf:%1c%2c%3c%4c%1c%2c%3c%4c\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h');
	// ft_printf("ft_printf:%1c%2c%3c%4c%1c%2c%3c%4c\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h');
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %c flag with width ******************
 	// */
 	// printf("SIMPLE STRING WITH c FLAG WITH Left aligned WIDTH\n");
	// printf("printf:%-5c|\n", c);
	// ft_printf("ft_printf:%-5c|\n", c);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %p flag ******************
 	// */
 	// printf("SIMPLE STRING WITH p FLAG\n");
	// printf("printf:%p\n", str);
	// ft_printf("ft_printf:%p\n", str);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %p flag ******************
 	// */
 	// printf("SIMPLE STRING WITH p FLAG with Left aligned WIDTH\n");
	// printf("printf:%-15p|\n", str);
	// ft_printf("ft_printf:%-15p|\n", str);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %p flag ******************
 	// */
 	// printf("SIMPLE STRING WITH p FLAG with WIDTH\n");
	// printf("printf:%15p\n", str);
	// ft_printf("ft_printf:%15p\n", str);
	// printf("\n");

	/*
 	** ****************** Simple string with %d flag ******************
 	*/
 	printf("SIMPLE STRING WITH d FLAG\n");
	printf("printf:%-8.5d\n", 34);
	ft_printf("ft_printf:%-8.5d\n", 34);
	printf("\n");

	// /*
 	// ** ****************** Simple string with %d flag + extra text ******************
 	// */
 	// printf("SIMPLE STRING WITH d flag + extra text\n");
	// printf("this %d number %d\n", 17, 18);
	// ft_printf("this %d number %d\n", 17, 18);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %d flag ******************
 	// */
 	// printf("SIMPLE STRING WITH d FLAG with WIDTH\n");
	// printf("printf:%15d\n", -12443);
	// ft_printf("ft_printf:%15d\n", -12443);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %d flag ******************
 	// */
 	// printf("SIMPLE STRING WITH d FLAG with Left aligned WIDTH\n");
	// printf("printf:%-15d|\n", -12443);
	// ft_printf("ft_printf:%-15d|\n", -12443);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %d flag ******************
 	// */
 	// printf("SIMPLE STRING WITH d FLAG with Left aligned WIDTH and plus\n");
	// printf("printf:%-+15d|\n", 12443);
	// ft_printf("ft_printf:%-+15d|\n", 12443);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %d flag ******************
 	// */
 	// printf("SIMPLE STRING WITH d FLAG with Right aligned WIDTH and plus\n");
	// printf("printf:%+15d|\n", 12443);
	// ft_printf("ft_printf:%+15d|\n", 12443);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %d flag ******************
 	// */
 	// printf("SIMPLE STRING WITH d FLAG\n");
	// printf("printf:%d\n", -12443);
	// ft_printf("ft_printf:%d\n", -12443);
	// printf("\n");

	// 	/*
 	// ** ****************** Simple string with %d flag ******************
 	// */
 	// printf("SIMPLE STRING WITH d FLAG with WIDTH\n");
	// printf("printf:%15d\n", 12443);
	// ft_printf("ft_printf:%15d\n", 12443);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %d flag ******************
 	// */
 	// printf("SIMPLE STRING WITH d FLAG with Left aligned WIDTH\n");
	// printf("printf:%-15d|\n", 12443);
	// ft_printf("ft_printf:%-15d|\n", 12443);
	// printf("\n");

	// /*
 	// ** ****************** Simple string with %d flag ******************
 	// */
 	// printf("SIMPLE STRING WITH d FLAG\n");
	// printf("printf:%d\n", 12443);
	// ft_printf("ft_printf:%d\n", 12443);
	// printf("\n");

	// 		/*
 	// ** ****************** Simple string with %X flag ******************
 	// */
 	// printf("SIMPLE STRING WITH X FLAG with WIDTH\n");
	// printf("printf:%15X\n", 12443);
	// ft_printf("ft_printf:%15X\n", 12443);
	// printf("\n");

	// 			/*
 	// ** ****************** Simple string with %X flag ******************
 	// */
 	// printf("SIMPLE STRING WITH X FLAG with Left aligned WIDTH\n");
	// printf("printf:%-15X|\n", 12443);
	// ft_printf("ft_printf:%-15X|\n", 12443);
	// printf("\n");

	// 		/*
 	// ** ****************** Simple string with %X flag ******************
 	// */
 	// printf("SIMPLE STRING WITH X FLAG\n");
	// printf("printf:%X\n", 12443);
	// ft_printf("ft_printf:%X\n", 12443);
	// printf("\n");


	return (0);
}
