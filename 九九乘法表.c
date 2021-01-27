//九九乘法表
#include <stdio.h>
int main()
{
	int a = 0;
	int j = 0;
	for (int a = 1; a <= 9; a++) {
		for (int j = 1; j <= a; j++)  {
			printf("%d * %d = %-2d",j,a,j*a); //%-2d  左对齐
			printf("   ");
		}
		printf("\n");

	}
	return 0;
}
