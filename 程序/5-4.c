#include<stdio.h>
int main()
{
	int i, n, s, h = 0;
	scanf("%d", &n);
	for ( i = 1, s = 1; i <= n; i++)
	{
		s *= i;
		h += s;
	}
	printf("%d\n", h);
	return 0;
}