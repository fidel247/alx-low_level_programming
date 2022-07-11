#include "main.h"

/**
 * print_diagonal - draws a diagonal line using the \ character
 * @n: the number of \ character to be printed
 */
void print_diagonal(int n)
{
	int will, still;

	if (n > 0)
	{
		for (will = 0; will < n; will++)
		{
			for (still = 0; still < will; still++)
				_putchar(' ');
			_putchar('\\');
			if (will == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
