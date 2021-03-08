//年龄
/*
* [例7.6]有5个学生坐在一起,问第5 个学生多少岁,他说比第4个学生大2岁。向第4个学生岁数，
他说比第3个学生大2岁。问第3个学生,又说比第2个学生大2岁。问第2个学生,说比第1个学生大2岁。
最后问第1个学生，他说是10岁。请问第5个学生多大。
*/

int age(int n)
{
	int c;
	if (n == 1)
	{
		c = 10;
		return c;
	}
	else
	{
		c = age(n - 1) + 2;
		return c;
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = age(n);
	printf("NO.5,the age is: %d\n", ret);
	return 0;
}
