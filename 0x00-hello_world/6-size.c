#include <stdio.h>

/**
 * main -> prints the size of various type
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("size of a char: %2ld byte(s)\n", sizeof(char));
	printf("size of an int: %2ld byte(s)\n", sizeof(int));
	printf("size of a long int: %2ld byte(s)\n", sizeof(long int));
	printf("size of a float: %2ld byte(s)\n", sizeof(float));
	return (0);
}
