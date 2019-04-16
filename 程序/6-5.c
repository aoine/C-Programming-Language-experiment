#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, x = 1, y, n, m, n1,m1;
	int a[5][5];
	for (n = 0; n < 5; n++)
		for (m = 0; m < 5; m++)
		{
			a[n][m] = i;
			i++;
		}
	for (n = 0; n < 5; n++)
		for (m = 0; m < 5; m++)
		{
			printf("%d\t", a[n][m]);
			if (x % 5 == 0)
				printf("\n");
			x++;
		}
	printf("请输入一个5x5矩阵，或按x使用默认矩阵\n");
	for(n=0,y=0;n<5;n++)
		for (m = 0; m < 5; m++)
		{
			scanf_s("%d", &a[n][m]);
			y++;
			system("cls");
			for (n1 = 0, x = 1; n1 <= 5; n1++)
			{
				for (m1 = 0; m1 <= 5; m1++)
				{
					printf("%d\t", a[n1][m1]);
					if (x % 5 == 0)
						printf("\n");
					printf("a");
					if (x = y)
						break;
					x++;
				}
				if (x = y)
					break;
			}
		}
	return 0;
}