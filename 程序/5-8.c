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
	printf("\n 共经过 %f 米\n", tl);
	printf("\n第8次反弹了 %f 米\n", tg);
	return 0;
}