#include <stdio.h>
int main()
{
	int a[10] = { 2,4,6,8,10,12,14,16,18 }, i, k, l, min;
	printf("请输入一个数：");
	scanf_s("%d", &a[9]);
	for (i = 0; i < 10; i++)
	{
		l = 0;
		min = a[i];
		for (k = i + 1; k < 10; k++)
		{
			if (a[k] < min)
			{
				min = a[k];
				l = k;
			}
		}
		if (l != 0)
		{
			a[l] = a[i];
			a[i] = min;
		}
	}
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");
	return 0;
}