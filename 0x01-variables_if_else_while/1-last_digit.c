#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -> print last digit
* RAND_max: number entered when calling the function
* Return: always 0
*/
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastn);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastn);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 not 0\n", n, lastn);
	}
	return (0);
}
