#include <math.h>
#include <stdio.h>
/**
 * print largest number
 * Return: 0
 */
int main(void)
{
	long x, maxi;
	long number = 612852475143;
	double square = sqrt(number);
	
	for (x = 1; x < square; x++)
	{
		if (number % x == 0)
		{
			maxi = number / x;
		}
	}
	printf("%ld\n", maxi);
	return (0);
}
