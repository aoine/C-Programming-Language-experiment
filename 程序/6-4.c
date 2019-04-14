#include <stdio.h>
int main()
{
	int a[20], i, n, m, x, y;
	for (i = 0, n = 2; i < 20; i++, n = n + 2)
		a[i] = n;
	printf("请输入一个数： ");
	scanf_s("%d", &m);
	for (i = 0, y = 0; i < 20; i++)
	{
		if (a[i] == m)
		{
			x = i;
			y = 1;
			break;
		}
	}
	if (y == 0)
	{
		printf("\nNot exists!\n\n");
		return 0;
	}
	for (i = x; i < 19; i++)
	{
		a[i] = a[i + 1];
	}
	printf("\n");
	for (i = 0; i < 19; i++)
	{
		printf("%d\t", a[i]);
		if (i % 7 == 0&&i!=0)
			printf("\n");
	}
	printf("\n\n");
	return 0;
}