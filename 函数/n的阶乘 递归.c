
#include <stdio.h>
#include <string.h>

//求n的阶乘 递归
int Fac(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}
int main()
{
	//求n的阶乘
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d", ret);
	return 0;
}
