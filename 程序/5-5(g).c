#include<stdio.h>
int main()
{
	double m, s=0;
	scanf("%lf", &m);
	for (;(int)m; m--)
		s = (int)m % 2 ? s + 1 / m : s - 1 / m;
	printf("%.2lf\n", s);
	return 0;
}