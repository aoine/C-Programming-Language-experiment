#include<stdio.h>
int main()
{
	int i, k, s = 0;
	for (i = 500; i <= 1000; i++)
	{
		for (k = 2; k < i; k++)
			if (i % k == 0)
				break;
		if(i==k)
			s++;
	}
	printf("%d\n", s);
	return 0;
}
