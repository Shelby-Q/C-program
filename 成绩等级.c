#include <stdio.h>
int main()
{
	int score;
	printf("请输入您的成绩：");
	scanf("%d",&score);
	if(score >= 90)
	{
		printf("A");
	}
	else if(80 <= score < 90)
	{
		printf("B");
	}
	else if(70 <= score < 80)
	{
		printf("C");
	}
	else if(60 <= score < 70)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}

	return 0;
}
