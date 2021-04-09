//第一种

//int count_bit_one(unsigned int n) //无符号（unsigned）和有符号（signed）两种类型（float和double总是带符号的）
//{
//	int count = 0;
//	while (n)
//	{
//		if (n%2==1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//第二种
//int count_bit_one(int n)
//{
//	int count= 0;
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		if (((n >> i)& 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//第三种
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int a = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("count = %d\n", count);
	system("pause");//system库函数-执行系统命令 pause 暂停
	return 0;
}
