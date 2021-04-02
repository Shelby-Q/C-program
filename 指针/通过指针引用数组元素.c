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
	/*
	for (p=a;p<(a+10);p++)
	{
		scanf("%d", p);
	}
	*/
	for (p=a;p<(a+10);p++)
	{
		printf("%d ", *p);
	}
	printf("\n");
	return 0;
}
//数组名表示的是数组首元素的地址
#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int *p = arr; //指针存放数组首元素的地址
    int sz = sizeof(arr)/sizeof(arr[0]);     
    for(i=0; i<sz; i++)
    {
        printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p+i);     
    }
    return 0; 
}

