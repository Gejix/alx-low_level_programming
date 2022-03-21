#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: A string
 * Return: return nothing
 */

void rev_string(char *s)
{
	char temp;
	int count, len, len1;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (count = 0; count < len / 2; count++)
	{
		temp = s[count];
		s[count] = s[len1];
		s[len--] = temp;
	}
}
