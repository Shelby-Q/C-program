//memset函数 初始化函数   memory ：记忆  set： 设置


#include <stdio.h>
#include <string.h>

int main()
{
	//void * memset ( void * ptr, int value, size_t num );
	/*
	ptr: 指向要填充的内存块的指针
	value:用这个值转换填充内存块
	num：要设置为value的字节数。size_t是无符号整数类型。
	**/
	char arr[] = "hello world";
	memset(arr, '3' , 5);
	printf("%s\n", arr);
	return 0; 
}
