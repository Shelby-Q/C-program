#define _CRT_SECURE_NO_WARNINGS 1
//打印素数 100-200
#include <stdio.h>
#include <string.h>

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++) //j=2;j<=sqrt(n);j++  sqrt() 开平方
	{
		if (n % j == 0)
		{
			return 0;
			
		}
		
	}
	return 1;

}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断是否为素数
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n\n100~200之间的素数共有：%d个\n", count);
	return 0;
}
/**
101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199

100~200之间的素数共有：21个
**/
