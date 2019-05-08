#include<stdio.h>
void pdsc(int a[10])
{
	int min,z,z1,x,y;
	for ( x = 0; x < 10; x++)
	{
		min = a[x];
		z1=-1;
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
		if( z1 != -1)
			a[z1] = z;
	}
	for( x = 0; x < 10; x++)
		printf("%d\t", a[x]);
}
int main()
{
	void pdsc(int a[10]);
	int a[10],i;
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n\n\n");
	pdsc( a );
	printf("\n\n\n");
	return 0;
}
