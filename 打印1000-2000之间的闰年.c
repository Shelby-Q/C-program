//打印1000-2000年之间的闰年
#include <stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year =1000;year <= 2000; year++)
	{
		
		if (year % 4 == 0 && year % 1000 != 0)
		{
			printf("%d  ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d  ", year);
			count++;
		}
	}
	printf("\n一共有：%d个\n",count);
	return 0;
}
