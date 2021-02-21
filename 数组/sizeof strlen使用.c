#include <stdio.h>
#include <string.h>

int main()
{
	/**strlen(); 计算给定字符串的长度, 直到碰到第一个字符串结束符'\0'为止，
	然后返回计数器值(长度不包含'\0')
	sizeof : 计算变量 数组 类型的大小 占用空间的大小 单位是字节 操作符
	*/
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	
	return 0;
}
