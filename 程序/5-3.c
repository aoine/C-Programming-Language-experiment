#include<stdio.h>
int main()
{
	int a, b, t, x, gys, gbs;
	scanf("%d", &a);
	scanf("%d", &b);
	x = a * b;
	while (a % b)
	{
		t = b;
		b = a % b;
		a = t;
	}
	gys = b;
	gbs = x / gys;
	printf("%d\n%d\n", gys, gbs);
	return 0;
}