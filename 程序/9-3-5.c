#include<stdio.h>
int main()
{
	int i, sum, a[10], * pa = a;
	printf("Please input( a[0]-a[9] ):");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);		//1Óï¾ä
	for (sum = 0, pa = a; pa < a + 10; pa++)
		sum += *pa;			//2Óï¾ä
	printf("sum=%d\n", sum);
	return 0;
}