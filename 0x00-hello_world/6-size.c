#include<stdio.h>
/**
 * main - print the size of data types
 *
 * Return: 0 always
 */
int main(void)
{
	printf("Size of char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %llu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
