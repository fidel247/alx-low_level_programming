#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @last_digit: the argument passed
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -1;
	_putchar(las_digit + '0');
	return (last_digit);
}
