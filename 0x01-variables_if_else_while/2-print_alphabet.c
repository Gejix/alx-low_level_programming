#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
