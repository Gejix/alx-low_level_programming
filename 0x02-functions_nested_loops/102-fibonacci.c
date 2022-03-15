#include <stdio.h>

/**
 * main - Program that prints the add of the fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int x, y, z;

	x = 1;
	y = 2;
	printf("%ld, %ld", x, y);
	for (c = 0; c < 48; c++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
