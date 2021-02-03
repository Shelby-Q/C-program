#include <stdio.h>
#include <string.h>

//自定义函数 比较大小

int get_max(x, y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字：<\n");
	scanf("%d%d", &a, &b);
	int max = get_max(a, b);
	printf("max=%d", max);
	return 0;
}
