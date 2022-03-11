#include <stdio.h>
/**
 * main - A program that prints out the alphabets in lowercase and uppercase
 *
 * Return: alway 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
