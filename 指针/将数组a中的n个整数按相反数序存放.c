//将数组a中的n个整数按相反数序存放

void inv(int x[], int n)
{
	int temp, i, j, m = (n - 1) / 2;
	for (i=0;i<=m;i++)
	{
		j = n - 1 - i;
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;
	}
	return 0;
}
int main()
{
	int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 };
	printf("The original arry:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	inv(a, 10);
	printf("The arrary has been inverted: \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
	}
