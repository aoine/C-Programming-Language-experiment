#include<stdio.h>
int main()
{
	int i, sum, a[10], * pa = a;
	printf("Please input( a[0]-a[9] ):");
	for (i = 0, pa = a; i < 10; i++, pa++)
		scanf("%d", pa);		//1Óï¾ä
	for (sum = i = 0; i < 10; i++)
		sum += a[i];			//2Óï¾ä
	printf("sum=%d\n", sum);
	return 0;
}