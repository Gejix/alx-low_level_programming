#include <stdio.h>

/**
 * main -Program that prints the add of the even-valued
 * terms
 *
 * Return: Always 0
 */
int main(void)
{
	long int x, y, z, outp;

	x = 1;
	y = 2;
	z = outp = 0;
	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if ((x % 2) == 0)
		{
			outp += x;
		}
	}
	printf("%ld\n", outp);
	return (0);
}
