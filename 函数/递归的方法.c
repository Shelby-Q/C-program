#include <stdio.h>
#include <string.h>


//打印字符串长度
int my_strlen(char* str)
{

	//1
	/*int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;*/

	//2
	if (*str != '\0')
	{
		return 1 + my_strlen(str+1);
	}
	else
	{
		return 0;
	}
}


int main()
{
	char arr[] = "hahaha";

	//模拟一个strlen函数
	int len = my_strlen(arr);//arr是数组 数组传参 传过去的不是 而是第一个元素的地址
	printf("len = %d\n", len);
	return 0;
}
