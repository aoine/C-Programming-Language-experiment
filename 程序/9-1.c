#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int str_len(char *str)
{
	int i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return i;
}
int main()
{
	int str_len(char* str);
	char *str = (char*)malloc(30 * sizeof(char));
	printf("Please input string:\n");
	scanf("%s", str);
	printf("Length of \"%s\"id :%d\n", str, str_len(str));
	return 0;
}