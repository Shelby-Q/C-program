//复制字符串

int main()
{
	char a[] = "I am a student.", b[20];
	int i;
	for (i=0;*(a+i)!='\0';i++)
	{
		*(b + i) = *(a + i);				              //将a[i]的值赋给b[i]	
	}
	*(b + i) = '\0';					        	        //在b数组中的有效字符后加上'\0'
	printf("len[%d]\n", strlen(a));
	printf("String a is : %s\n",a);
	printf("String b is : %s\n",b);
	/*for (i=0;b[i]!='\0';i++)
	{
		printf("%c", b[i]);
	}*/
	printf("\n");
	return 0;
}

//用指针变量来处理

int main()
{
	char a[] = "I am a boy.",b[20], * p1, * p2;
	p1 = a, p2 = b;									              //p1 p2 分别指向a，b中的第一个元素
	for (;*p1!='\0';p1++,p2++)						        //p1 p2 每次自加1
	{
		* p2 = * p1;								                //将p1所指向的元素的值赋给p2所指向的元素	
	}		
	*p2 = '\0';										                //再复制完全部的有效字符后加'\0'	
	printf("String a is : %s\n", a);
	printf("String b is : %s\n", b);
	return 0;
}
