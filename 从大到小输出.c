//从大到小排列输出

#include <stdio.h>
int main() 
{
	int a, b, c;
	printf("请输入三个数字:<\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a<b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a<c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b<c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("排序为：%d %d %d",a,b,c);
	return 0;
}
