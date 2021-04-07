int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c= %d  \n",a,b,c);
	return 0;
}
/**
结果
a = 9 b = 23 c= 8
**/
