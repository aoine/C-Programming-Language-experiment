#include<stdio.h>
int main()
{
	int a[10][10],h,l;
	a[0][0] = 0;
	for (h = 1; h < 10; h++)
	{
		a[h][0] = 1;
		a[h][h] = 1;
		for (l = 1; l < h; l++)
		{
			a[h][l] = a[h - 1][l - 1] + a[h - 1][l];
		}
	}
	for (h = 0; h < 10; h++)
	{
		for (l = 0; l <= h; l++)
			printf("%d\t", a[h][l]);
		printf("\n\n");
	}
	return 0;
}
