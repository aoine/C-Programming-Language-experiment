#include<stdio.h>	
int zdgsy(int x,int y)
{
	int x1, y1, i , i1 , a=0;
	int gys[2][1000];
	for ( i = 1 , x1 = 0 ; i <= x; i++)
	{
		if (x%i==0)
		{
			gys[0][x1] = i;
			x1++;
		}
	}
	for ( i = 1 , y1 = 0 ; i <= y; i++)
	{
		if (y%i==0)
		{
			gys[1][y1] = i;
			y1++;
		}
	}
	for ( i = 0; i < x1; i++)
	{
		for ( i1 = 0; i1 < y1; i1++)
		{
			if (gys[0][i]==gys[1][i1])
			{
				a = gys[1][i1];
			}
		}
	}
	return a;
}

int main()
{
	int zdgys(int x, int y);
	int x, y, scgys, scgbs;
	scanf_s("%d%d", &x, &y);
	scgys = zdgsy(x, y);
	printf("\n���Լ��Ϊ %d\n\n", scgys);

	return 0;
}