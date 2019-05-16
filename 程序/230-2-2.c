#include <stdio.h>
int strcompare(char* str1, char* str2)
{
	int i, x = 0, str = 0;
	for (i = 0; *(str1 + i) != '\0' && *(str2 + i) != '\0'; i++)
	{
		if (*(str1 + i) != *(str2 + i))
		{
			x = *(str1 + i) - *(str2 + i);
			return x;
		}
	}
	if (*(str1 + i) == '\0')
		str = 1;
	if (*(str2 + i) == '\0')
		str = 2;
	if (*(str1 + i) == '\0' && *(str2 + i) == '\0')
	{
		x = 0;
		return x;
	}
	if (str == 1)
		x = 'A' - *(str2 + i);		//看情况，如果不是，改 x = *(str2 + i)
	if (str == 2)
		x = *(str1 + i) - 'A';	//同上
	return x;
}
int main()
{
	int i;
	char str1[50], str2[50], *s1, *s2;
	s1 = &str1;
	s2 = &str2;
	scanf("%s", s1);
	scanf("%s", s2);
	i = strcompare(s1, s2);
	printf("\n%d\n", i);
	return 0;
}