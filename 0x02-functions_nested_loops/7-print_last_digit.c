#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
	}
	i = n % 10;
	_putchar(i + '0');
	return (i);
}
