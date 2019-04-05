#include <stdio.h>

int main()
{
	int h, m;
	h = 560 / 60;
	m = 560 - h*60;
	printf(" 560min\n   =\n h = %d\n m = %d \n", h, m);
	return 0;
}