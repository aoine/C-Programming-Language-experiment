#include <stdio.h>
int main()
{
	char s[100] = "hello";
	char b[] = "world";
	int len = mystrlen(s);
	printf("len=%d\n", len);

}

int mystrlen(char s[]) //求字符串长度方法
{
	int len = 0;
	char* p = s;
	while (*p)
	{
		len++;
		p++;
	}
	return len;
}
