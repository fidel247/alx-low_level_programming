#include <stdio.h>

/**
 * main - prints the value of even fib sequence
 * not exceeding 4,000,000
 * Return: always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sumfib;
	float tot_sum;

	while (1)
	{
		sumfib = fib1 + fib2;
		if (sumfib > 4000000)
			break;
		if ((sumfib % 2) == 0)
			tot_sum += sumfib;
		fib1 = fib2;
		fib2 = sumfib;
	}
	printf("%.0f\n", tot_sum);
	return (0);
}
