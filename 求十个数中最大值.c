//求十个数中最大值

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = 0;
	int i = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("最大值是%d", max);
	return 0;
}
