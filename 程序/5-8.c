#include <stdio.h>

int main()
{
	int c;
	float tl, tcl,tg;
	for (c = 1,tl=0,tg=100; c <= 8; c++)
	{
		tcl = tg;
		tg = tg / 2;
		tcl = tcl + tg;
		tl = tl + tcl;
	}
	printf("\n ������ %f ��\n", tl);
	printf("\n��8�η����� %f ��\n", tg);
	return 0;
}