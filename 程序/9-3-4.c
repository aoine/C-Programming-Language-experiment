#include<stdio.h>
int main()
{
	int i, sum, a[10], * pa = a;
	printf("Please input( a[0]-a[9] ):");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);		//1���
	for (sum = i = 0, pa = a; i < 10; i++, pa++)
		sum += *pa;			//2���
	printf("sum=%d\n", sum);
	return 0;
}