#include "ft_printf.h"
#include <stdio.h>

int main(void)
{

 	printf("s FLAG WITH Left aligned WIDTH: hello\n");
	printf("   printf:%-5s|\n", "hello");
	ft_printf("ft_printf:%-5s|\n", "hello");
	printf("\n");

 	printf("p FLAG: hello\n");
	printf("   printf:%p\n", "hello");
	ft_printf("ft_printf:%p\n", "hello");
	printf("\n");

 	printf("p FLAG with Left aligned WIDTH: hello\n");
	printf("   printf:%-15p|\n", "hello");
	ft_printf("ft_printf:%-15p|\n", "hello");
	printf("\n");

   printf("p FLAG with WIDTH: hello\n");
	printf("   printf:%15p\n", "hello");
	ft_printf("ft_printf:%15p\n", "hello");
	printf("\n");

   printf("d FLAG with WIDTH: -12443\n");
	printf("   printf:%15d\n", -12443);
	ft_printf("ft_printf:%15d\n", -12443);
	printf("\n");
   
   printf("d FLAG with Left aligned WIDTH: -12443\n");
	printf("   printf:%-15d|\n", -12443);
	ft_printf("ft_printf:%-15d|\n", -12443);
	printf("\n");

 	printf("d FLAG: 12443\n");
	printf("   printf:%d\n", 12443);
	ft_printf("ft_printf:%d\n", 12443);
	printf("\n");

 	printf("#.0 with o\n\n");
	printf("   printf:%#.0o|\n", 0);
	ft_printf("ft_printf:%#.0o|\n", 0);
	printf("\n");

 	printf("#.0 with X\n\n");
	printf("   printf:%#.0X|\n", 0);
	ft_printf("ft_printf:%#.0X|\n", 0);
	printf("\n");

 	printf("#.0 with x\n\n");
	printf("   printf:%#.0x|\n", 0);
	ft_printf("ft_printf:%#.0x|\n", 0);
	printf("\n");

 	printf("#. with o\n\n");
	printf("   printf:%#.o|\n", 0);
	ft_printf("ft_printf:%#.o|\n", 0);
	printf("\n");

 	printf("#. with X\n\n");
	printf("   printf:%#.X|\n", 0);
	ft_printf("ft_printf:%#.X|\n", 0);
	printf("\n");

 	printf("#. with x\n\n");
	printf("   printf:%#.x|\n", 0);
	ft_printf("ft_printf:%#.x|\n", 0);
	printf("\n");

 	printf("#5.0 with o\n\n");
	printf("   printf:%#5.0o|\n", 0);
	ft_printf("ft_printf:%#5.0o|\n", 0);
	printf("\n");

 	printf("#5.0 with X\n\n");
	printf("   printf:%#5.0X|\n", 0);
	ft_printf("ft_printf:%#5.0X|\n", 0);
	printf("\n");

 	printf("#5.0 with x\n\n");
	printf("   printf:%#5.0x|\n", 0);
	ft_printf("ft_printf:%#5.0x|\n", 0);
	printf("\n");

 	printf("#5. with o\n\n");
	printf("   printf:%#5.o|\n", 0);
	ft_printf("ft_printf:%#5.o|\n", 0);
	printf("\n");

 	printf("#5. with X\n\n");
	printf("   printf:%#5.X|\n", 0);
	ft_printf("ft_printf:%#5.X|\n", 0);
	printf("\n");

 	printf("#5. with x\n\n");
	printf("   printf:%#5.x|\n", 0);
	ft_printf("ft_printf:%#5.x|\n", 0);
	printf("\n");

 	printf("#-5.0 with o\n\n");
	printf("   printf:%#-5.0o|\n", 0);
	ft_printf("ft_printf:%#-5.0o|\n", 0);
	printf("\n");

 	printf("#-5.0 with X\n\n");
	printf("   printf:%#-5.0X|\n", 0);
	ft_printf("ft_printf:%#-5.0X|\n", 0);
	printf("\n");

 	printf("#-5.0 with x\n\n");
	printf("   printf:%#-5.0x|\n", 0);
	ft_printf("ft_printf:%#-5.0x|\n", 0);
	printf("\n");

 	printf("#-5. with o\n\n");
	printf("   printf:%#-5.o|\n", 0);
	ft_printf("ft_printf:%#-5.o|\n", 0);
	printf("\n");

 	printf("#-5. with X\n\n");
	printf("   printf:%#-5.X|\n", 0);
	ft_printf("ft_printf:%#-5.X|\n", 0);
	printf("\n");

 	printf("#-5. with x\n\n");
	printf("   printf:%#-5.x|\n", 0);
	ft_printf("ft_printf:%#-5.x|\n", 0);
	printf("\n");

    return (0);
}