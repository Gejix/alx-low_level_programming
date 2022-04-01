#include "main.h"

/**
 * _puts - A function that prints a string folloed by a new line.
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
