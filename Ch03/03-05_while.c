#include <stdio.h>

int main()
{
	int x;

	x = 2;
	while (x <= 20)
	{
		if (x % 2 == 0)
		{
			printf("%d\n", x);
		}
		x++;
	}

	return (0);
}
