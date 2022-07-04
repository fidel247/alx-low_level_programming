#include <stdio.h>
#include <unistd.h>

/**
 * main - prints axactly "and that piece of art is useful"
 * - Dora Korpar, 20-15-19
 *   followed by a neww line
 *   Return: always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 20-15-19\n", 59);
	return (1);
}
