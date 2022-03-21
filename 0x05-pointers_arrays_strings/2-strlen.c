#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *@s: string
 * Return: always 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
