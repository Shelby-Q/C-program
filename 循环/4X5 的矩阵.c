//输出一个 4X5 的矩阵
/*
1   2   3	4	5
2	4	6	8	10
3	6	9	12	15
4	8	12	16	20
*/

#include <stdio.h>
int main()
{
	int i, j, n = 0;
	for (i = 1; i <= 4;i++)
	{
		for (j = 1;j <= 5;j++,n++)
		{
			if (n%5 == 0)
			{
				printf("\n");
			}
			printf("%d\t", i * j);
			Sleep(800); //休眠 暂停函数 单位毫秒
		}
	}
	printf("\n");
	return 0;

}
