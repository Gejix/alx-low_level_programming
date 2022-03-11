#include <stdio.h>
/**
 * main - program prints all numbers of base 16 in lowercase
 * followed by new line
 * Return: always 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
