#include <stdio.h>
#include <string.h>

//冒泡排序

void bubble_sort(int arr[], int sz)
{
	//确定冒泡排序的躺数
	int i = 0;
	for (i = 0; i < sz-1; i++) //元素个数减一
	{
		int flag = 1;//flag=1 假设这一趟排序的数据已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main() 
{
	int i = 0;
	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序 升序
	//arr是数组 对arr进行传参 实际上传递过去的是数组arr首元素的地址 arr[0]
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
