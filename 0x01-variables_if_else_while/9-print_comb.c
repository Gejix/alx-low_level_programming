#include <stdio.h>
/**
 * main - A program that prints all posible combination of single-digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if  (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
