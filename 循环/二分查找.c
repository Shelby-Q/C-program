//二分查找
int main()
 {
 	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
 	int size = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
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
 			printf("找到了 下标是：%d\n", mid);
 			break;
 		}
 		if (left > right)
 		{
 			printf("找不到\n");
 		}
 	}
 	return 0;
 }
