//两数组内容交换

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("arr%d[%d]=%d\t",i, i, arr[i]);
	}
	printf("\n\n\n");
}

int main()
{
	int arr1[] = { 9,8,7,6,5 };
	int arr2[] = { 0,1,2,3,4 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i,temp = 0;
	printf("交换前的数组是：\n\n");
	Print(arr1, sz);
	Print(arr2, sz);
	printf("交换后的数组是：\n\n");
	for (i = 0; i < sz; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	Print(arr1, sz);
	Print(arr2, sz);
	system("pause");
	return 0;
}
/**
结果
交换前的数组是：

arr0[0]=9       arr1[1]=8       arr2[2]=7       arr3[3]=6       arr4[4]=5


arr0[0]=0       arr1[1]=1       arr2[2]=2       arr3[3]=3       arr4[4]=4


交换后的数组是：

arr0[0]=0       arr1[1]=1       arr2[2]=2       arr3[3]=3       arr4[4]=4


arr0[0]=9       arr1[1]=8       arr2[2]=7       arr3[3]=6       arr4[4]=5
**/
