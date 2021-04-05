#include <stdio.h>

void Init(int arr[], int sz)
{
	int i = 0;
	for (i=0;i<sz;i++)
	{
		arr[i] = i;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i=0;i<10;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

void Reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("初始数组为：\n");
	Init(arr, sz);//Init进行函数初始化
	Print(arr, sz);//打印数组
	Reverse(arr, sz);//置换函数 倒放
	printf("重置后的数组为：\n");
	Print(arr, sz);//打印数组
	return 0;
}
