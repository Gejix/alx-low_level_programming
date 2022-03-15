#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowcase.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
