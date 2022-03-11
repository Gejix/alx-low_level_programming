#include <stdio.h>
/**
 * main - A program that will print all sigle digit numbers
 * followed by new line.
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
