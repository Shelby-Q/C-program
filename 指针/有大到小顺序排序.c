//用指针方法对10个整数有大到小顺序排序

void sort(int x[], int n)
{
	int i, j, k, t;
	for (i=0;i<n-1;i++)
	{
		k = i;
		for (j=i+1;j<n;j++)
		{
			if (x[j]>x[k])
			{
				k = j;
				if (k!=i)
				{
					t = x[i];
					x[i] = x[k];
					x[k] = t;
				}
			}
		}
	}
}

int main()
{
	int i, * p, a[10];
	p = a;										//指针变量p指向a[0]					
	printf("please enter 10 integer numbers: \n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", p++);						//输入十个数
	}
	p = a;										//指针变量重新p指向a[0]
	sort(p, 10);								//调用sort函数
	for (p=a,i=0;i<10;i++)
	{
		printf("%d ", *p);
		p++;
	}
	printf("\n");
	return 0;
}
