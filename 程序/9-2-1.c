#include<stdio.h>
void swap(int* p1, int *p2);
int main()
{
	int a, b;
	printf("Please input (a b):");
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return 0;
}
void swap(int *p1,int *p2)
{
	int z;
	z = *p1;
	*p1 = *p2;
	*p2 = z;
}