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
//用指针变量指向数组元素

int main()
{
	int a[10];
	int* p, i;
	printf("Please enter ten interger numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for (p=a;p<(a+10);p++)
	{
		printf("%d ", *p);
	}
	printf("\n");
	return 0;
}

