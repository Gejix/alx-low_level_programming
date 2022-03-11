#include <stdio.h>
/**
 * main - Program prints all posible combination of two two-digit numbers
 *
 * Return: alway 0
 */
int main(void)
{
int num1, num2, num3, num4, numOut1, numOut2;

num1 = num2 = num3 = num4 = 48;
while (num4 < 58)
{
	num3 = 48;
	while (num3 < 58)
	{
		num2 = 48;
		while (num2 < 58)
		{
			num1 = 48;
			while (num1 < 58)
			{
				numOut1 = (num4 * 10) + num3;
				numOut2 = (num2 * 10) + num1;
				if (numOut1 < numOut2)
				{
					putchar(num4);
					putchar(num3);
					putchar(' ');
					putchar(num2);
					putchar(num1);
					if (num4 == 57 && num3 == 56 && num2 == 57 && num1 == 57)
					break;
					putchar(',');
					putchar(' ');
				}
				num1++;
			}
			num2++;
		}
		num3++;
	}
	num4++;
}
putchar('\n');
return (0);
}
