#include "main.h"

/**
 * print_times_table - This prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, outp;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				outp = a * b;
				_putchar(44);
				_putchar(32);
				if (outp <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(outp + 48);
				}
				else if (outp <= 99)
				{
					_putchar(32);
					_putchar((outp / 10) + 48);
					_putchar((outp % 10) + 48);
				}
				else
				{
					_putchar(((outp / 100) % 10) + 48);
					_putchar(((outp / 10) % 10) + 48);
					_putchar((outp % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
