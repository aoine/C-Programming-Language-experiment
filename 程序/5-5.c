#include<stdio.h>
int main()
{
	int i, m;
	double h = 0, s = 1;
	scanf("%d", &m);
	for (i = 1; i <= m; i++)
	{
		h += s/i;
		s *= -1;
	}
	printf("%.2lf\n", h);
	return 0;
}