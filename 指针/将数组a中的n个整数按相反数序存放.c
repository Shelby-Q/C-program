//将数组a中的n个整数按相反数序存放

void inv(int x[], int n)							//形参x是数组名				
{
	int temp, i, j, m = (n - 1) / 2;
	for (i=0;i<=m;i++)
	{
		j = n - 1 - i;
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;                                    		//将x[i]与x[j]交换
	}
	return 0;
}
int main()
{
	int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 };
	printf("The original arry:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);						//输出未交换时的函数值
	}
	printf("\n");
	inv(a, 10);								//调用inv函数  进行交换								  
	printf("The arrary has been inverted: \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);						//输出交换后的数组的个元素的值
	}
	printf("\n");
	return 0;
	
}
