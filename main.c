#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	printf("T\001\002\007\v\010\f\r\nT\n");
	ft_printf("\nT\001\002\007\v\010\f\r\nT\n");
}