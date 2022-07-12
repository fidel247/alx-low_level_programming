#include "main.h"
#include <stdio.h>

/**
* print_array - prints an inputted element.
* @a: the array of integers.
* @n: the number of elements to be printed
*/
void print_array(int *a, int n)
{

	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(", ");
	}
}
