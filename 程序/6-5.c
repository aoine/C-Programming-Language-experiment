#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0, x=1, y, n, m;
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
	printf("������һ��5x5���󣬻�xʹ��Ĭ�Ͼ���\n");
	return 0;
}