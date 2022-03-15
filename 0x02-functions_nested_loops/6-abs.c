#include "main.h"

/**
 * _abs - A program that gives the absolute value
 * of an integer.
 *
 * @n: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
