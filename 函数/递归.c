#include <stdio.h>
#include <string.h>


//递归

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf(" %d", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	//递归
	print(num);
	return 0;
}
