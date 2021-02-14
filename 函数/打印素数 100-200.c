#define _CRT_SECURE_NO_WARNINGS 1
//打印素数 100-200
#include <stdio.h>
#include <string.h>

int is_prime(int n)
{
	int j = 0;
	for (j=2;j<n;j++) //j=2;j<=sqrt(n);j++  sqrt() 开平方
	{
		if (n%j == 0)
		{
			return 0;
		}
	}
		return 1;
}

int main()
{
	int i = 0;
	for (i=100;i<=200;i++)
	{
		//判断是否为素数
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
