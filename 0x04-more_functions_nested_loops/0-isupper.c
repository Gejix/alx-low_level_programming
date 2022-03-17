#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if it is an uppercase character, 0 in the other case.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
