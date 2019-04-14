#include <stdio.h>
int main()
{
	int i,x,y,n,m;
	int a[5][5];
	for(i=0;i<=24;i++)
		for(n=0;n<5;n++)
			for(m=0;m<5;m++)
				a[n][m]=i;
	for(n=0;n<5;n++)
		for(m=0;m<5;m++)
			printf("%d\t",a[n][m]);
	printf("请输入一个5x5矩阵，或按x使用默认矩阵\n");
	return 0;
}