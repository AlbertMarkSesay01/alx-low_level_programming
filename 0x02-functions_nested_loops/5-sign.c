#include "main.h"
/**
 *print_sign - A function taht prints a sign of a number.
 *@n: The number of which sign will be printed
 *Return: 1 if number is greater than zero
 *	  0 if the number is zero
 *	  -1 if the number is less then zero
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
