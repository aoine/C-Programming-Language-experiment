#include <stdio.h>
void sort( int *a, int *b, int *c)
{
	if( *a < *b )
		if( *a < *c )
		{
			printf("%d\t",*a);
			if( *b < *c )
				printf("%d\t%d\n", *b, *c);
			else
				printf("%d\t%d\n", *c, *b);
		}
		else
		{
			printf("%d\t",*c);
			if( *a < *b )
				printf("%d\t%d\n", *a, *b);
			else
				printf("%d\t%d\n", *b, *a);
		}
	else
		if( *b < *c )
		{
			printf("%d\t",*b);
			if( *a < *c )
				printf("%d\t%d\n", *a, *c);
			else
				printf("%d\t%d\n", *c, *a);
		}
		else
		{
			printf("%d\t",*c);
			if( *a < *b )
				printf("%d\t%d\n", *a, *b);
			else
				printf("%d\t%d\n", *b, *a);
		}
}

int main()
{
	int a, b, c;
	printf("ÇëÊäÈë3¸öÊý\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	sort( &a, &b, &c);
	return 0;
}