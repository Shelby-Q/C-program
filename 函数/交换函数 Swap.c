#include <stdio.h>
#include <string.h>

// void swap(basic_string& str);

void Swap(int* pa, int* pb)//利用指针变量 int* pa:存放地址 a的地址
{
	int tmp = 0;
	tmp = *pa;    //*pa:通过地址找到a的值
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("a=%d,b=%d", a, b);
	return 0;
}
