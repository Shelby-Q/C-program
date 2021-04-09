//求二进制中不同位的个数

int get_differ(int n,int m)
{
	int temp = n ^ m;//异或 两个相应位为“异”（值不同）则该位结果为1 否则为0
	int count = 0;
	while (temp)
	{
		temp = temp & (temp - 1);
		count++;
	}
	return count;
}

int main()
{
	int n, m = 0;
	printf("请输入两个整数：\n");
	scanf("%d%d", &n, &m);
	int count = get_differ(n, m);
	printf("count = %d\n", count);

	return 0;
}
