//

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;//数组首元素地址
	for (i=0;i<size;i++)
	{
		printf("%d ", *p);
		p = p + 1;
		//p++;
	}
	return  0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[9];//数组首元素地址
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);
		p -= 2;
	}
	return  0;
}
