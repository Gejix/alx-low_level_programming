#include "main.h"

/**
 * print_last_digit - A program that prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int numb;

	numb = n % 10;
	if (numb < 0)
	{
		_putchar(-numb + '0');
		return (-numb);
	}
	else
	{
		_putchar(numb + '0');
		return (numb);
	}
}
