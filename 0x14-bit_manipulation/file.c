#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i = 0, tmp;
	char pwd[] = "Foob";

	while (i <= 3)
	{
		tmp = i << 3;
		pwd[i] = 0xff & 0x46c6f48 >> tmp;
		i++;
	}
	puts(pwd);
	return (0);
}
