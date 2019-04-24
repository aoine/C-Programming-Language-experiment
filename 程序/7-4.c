#include<stdio.h>
void pdsc(int a[10])
{
	int min,z,z1,x,y;
	for ( x = 0; x < 10; x++)
	{
		min = a[x];
		for ( y = x+1; y < 10; y++)
		{
			if (a[y] < min)
			{
				min = a[y];
				z1 = y;
			}
		}
		z = a[x];
		a[x] = min;
		a[z1] = z;

	}
}
int main()
{
	void pdsc(int a[10]);
	int a[10],i;
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	pdsc(a);
	return 0;
}