//1-100中含有9的整数有几个
#include <stdio.h>
int main() {
	int i = 0;
	int count = 0;
	for (i = 1;i <= 100; i++)
	{
		if (i%10 == 9)
		{
			printf("%d ", i);
			count ++ ;
		}
		else if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n 共有%d个", count);
	return 0;
}
