#include "main.h"
#include <stdio.h>

/**
 * main - Program tha prints the number from 1 t0 100
 * but for multiples of three prints Fizz instead of number
 * and for multiples of five prints Buzz
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x == 1)
		{
			printf("%d", x);
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
