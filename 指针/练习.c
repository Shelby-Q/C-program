int main()
{
	int arr[] = { 1,2,3,5 };
	short* p = (short*)arr; //short类型解引用是两个字节
	int i = 0;
	for (i=0;i<4;i++)
	{
		*(p + i) = 0;
	}
	for (i=0;i<5;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
/**
结果
0 0 3 4 5
**/





int main()
{
	int a = 0x11223344;   //内存中 放置为 44 33 22 11
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}
/**
结果
11223300
**/
