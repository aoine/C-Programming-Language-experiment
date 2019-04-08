#include <stdio.h>
int main()
{
	int score, grade;
	printf("Please input a score(0~100):\n");
	scanf_s("%d", &score);
	grade = score / 10;
	switch (grade)
	{
		case	10:
		case	9 : printf("优秀\n");	break;
		case	8:
		case	7 : printf("良好\n");	break;
		case	6:	printf("合格\n");	break;
		case	5:
		case	4 :
		case	3 :
		case	2 :
		case	1 :
		case	0 : printf("不合格\n");	break;
	default:	printf("数据出界！\n");
	}
	return 0;
}