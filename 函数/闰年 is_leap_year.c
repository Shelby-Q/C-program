#include <stdio.h>
#include <string.h>

//is_leap_year 是闰年吗？
int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 == 0) || (y % 400 == 0))
	{
		return 1; //返回1 就是闰年
	}
	else
	{
		return 0; //返回0 就是不闰年
	
	}
}
int main()
{
	int year = 0;
	printf("闰年有：\n");
	for (year = 100;year <= 2000;year++)
	{
		//判断是否为闰年
		if (is_leap_year(year) == 1)
		{
			printf("%d  ", year);
		}
	}
	return 0;
}
