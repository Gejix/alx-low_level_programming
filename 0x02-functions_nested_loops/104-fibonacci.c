#include <stdio.h>

/**
 * main - program that prints the first 98 Fibonacci numbers
 *next line
 * Return: Always 0
 */
int main(void)
{
	int k, boolean, boolean1;
	long int num1, num2, fn, fn1, num11, num22;

	num1 = 1;
	num2 = 2;
	boolean = boolean1 = 1;
	printf("%ld, %ld", num1, num2);
	for (k = 0; k < 96; k++)
	{
		if (boolean)
		{
			fn = num1 + num2;
			printf(", %ld", fn);
			num1 = num2;
			num2 = fn;
		}
		else
		{
			if (boolean1)
			{
				num11 = num1 % 1000000000;
				num22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boolean1 = 0;
			}
			fn1 = (num11 + num22);
			fn = num1 + num2 + (fn1 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn1 % 1000000000);
			num1 = num2;
			num11 = num22;
			num2 = fn;
			num22 = (fn1 % 1000000000);
		}
		if (((num1 + num2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
