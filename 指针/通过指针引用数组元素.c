#include <stdio.h>
#include <string.h>

//下标法

int main()
{
	int a[10];
	int i;
	printf("Please enter ten interger numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("%\n");
	return 0;
}

//通过数组名计算数组元素地址

int main()
{
	int a[10];
	int i;
	printf("Please enter ten interger numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(a+i));
	}
	printf("%\n");
	return 0;
}
