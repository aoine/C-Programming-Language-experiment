#include <stdio.h>
int main()
{
	int a[5], i, n, m, x, y;
	printf("请输入5个整数：\n");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 100; i++)
	{
		n = 0;
		for (m = 0, y = 1; y < 5; m++, y++)
		{
			if (a[m] > a[y])
			{
				x = a[y];
				a[y] = a[m];
				a[m] = x;
				n = 1;
			}
		}
		if (n == 0)
			break;
	}
	printf("\n\n");
	for (i = 0; i < 5; i++)
		printf("%d\t", a[i]);
	printf("\n\n");
	return 0;
}