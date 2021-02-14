#include <stdio.h>
#include <string.h>

//二分查找
int binary_search(int arr[], int k,int size) //int arr[] 本质上是一个指针
{
	//算法的实现
	//int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//中间元素下标
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,size);
	if (ret == -1)
	{
		printf("找不到");
	}
	else 
	{
		printf("找到了，下标是：%d", ret);
	}
	return 0;
}
