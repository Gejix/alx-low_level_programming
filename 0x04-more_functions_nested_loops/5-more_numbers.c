#include "main.h"

/**
 * more_numbers - prints 10 times the number
 * from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 15; num2++)
		{
			if (num2 > 9)
			_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');
		}
		_putchar('\n');
	}
}
