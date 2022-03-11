#include <stdio.h>
/**
 * main - Program prints the numbers 00 to 99.
 *
 * Return: alway 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
