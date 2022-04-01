#include "main.h"

/**
 * _isalpha - A program that Shows 1 if the input is c
 * letter Another cases, shows 0
 *
 * @c: The Charater is ASCII code
 *
 * Return: 1 for for letters. Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
