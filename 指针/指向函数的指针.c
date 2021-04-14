//指向函数的指针

int max(int x, int y)						//max函数
{
	int z;
	if (x>y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int min(int x, int y)						//min函数
{
	int z;
	if (x<y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int main()
{
	int max(int x, int y);
	int min(int x, int y);
	int (*p)(int,int);
	int a, b, c, n;
	printf("Please enter a and b: \n");
	scanf("%d %d", &a, &b);
	printf("Please choose 1 or 2: \n");
	scanf("%d", &n);
	if (n==1)
	{
		p = max;
	}
	else if(n==2)
	{
		p = min;
	}
	c = (*p)(a,b);
	printf("a=%d\nb=%d\n",a,b);
	if (n==1)
	{
		printf("max=%d\n", c);
	}
	else
	{
		printf("min=%d\n", c);
	}
	return 0;
}
