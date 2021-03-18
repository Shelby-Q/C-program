#include <stdio.h>

//交换数值
int main()
{
	int a = 10; 
	int b = 20;
	/*
	a=a+b;
	b=a-b;
	a=a-b;
	*/
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a = %d  b = %d\n", a, b);

	return 0;
}
