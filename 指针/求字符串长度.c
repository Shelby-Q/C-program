//求字符串长度
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start; //'\0'地址减去首元素地址 指针减指针
}
int main()
{
	/*
	strlen - 求字符串长度
	递归 - 模拟实现stelen 
	*/
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("字符串长度:%d \n", len);

	return 0;
}
