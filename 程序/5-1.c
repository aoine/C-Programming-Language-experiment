#include<stdio.h>
int main()
{
	int i, g, s, b;
	for ( i = 100; i < 1000; i++)
	{
		g = i % 10;
		s = i / 10 % 10;
		b = i / 100;
		if (i == g * g * g + s * s * s + b * b * b)
			printf("%d\n", i);
	}
	return 0;
}