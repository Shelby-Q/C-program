#include <stdio.h>
#include <string.h>
int main()
{
	//拷贝字符串 strcpy函数   /0 字符串结束标志也会被拷贝过去
    //char * strcpy ( char * destination, const char * source );
	char arr1[] = "bit";
	char arr2[20] = "#########";
	strcpy(arr2, arr1);//arr2 : 为目标   arr2: 为数据源
	printf("%s\n", arr2);

	return 0;
}
