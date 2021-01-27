//求最大公约数
#include <stdio.h>
int main()
{
	int a,b,r;
	printf("请输入两个数字：<\n");
	scanf("%d%d", &a, &b);

	while (r = a%b)
	{
		b = a;
		b = r;
	}
	printf("最大公约数是：%d",b);
	return 0;
}
