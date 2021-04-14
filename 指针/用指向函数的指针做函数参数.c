//用指向函数的指针做函数参数

int fun(int x, int y,int (* p)(int,int t))
{
	int result;
	result = ( *p)(x, y);
	printf("%d\n",result);
	return;
}

int max(int x,int y)
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
	printf("max=");
	return z;
}

int min(int x, int y)
{
	int z;
	if (x < y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	printf("min=");
	return z;
}

int add(int x, int y)
{
	int z;
	z = x + y;
	printf("sum=");
	return z;
}
int main()
{
	int a, b, n;
	printf("Please enter a,b:\n");
	scanf("%d %d", &a, &b);
	printf("Please choose 1,2 or 3:\n");
	scanf("%d", &n);
	if (n==1)
	{
		fun(a,b, max);
	}
	else if (n==2)
	{
		fun(a, b, min);
	}
	else if(n==3)
	{
		fun(a, b, add);
	}
	return 0;
}
