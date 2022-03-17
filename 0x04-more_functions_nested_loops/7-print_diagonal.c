#include "main.h"

/**
 * print_diagonal - Program that draws a diagonal line on the terminal
 * @n: represents the number of times \ is printed
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (x < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
