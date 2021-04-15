//字符指针做函数参数

//1.用字符型指针变量作实参
void copy_string(char from[], char to[])
{
	int i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}

int main()
{
	char a[] = "I am a student.";
	char b[] = "You are a teacher.";
	char* from = a;
	char* to = b;
	printf("string a = %s\nstring b = %s\n",a,b);
	copy_string(from, to);
	printf("\ncopy string a to string b:\n");
	printf("string a = %s\nstring b = %s\n", a, b);
	return 0;
}


//用字符指针变量作形参和实参

void copy_string(char* from, char* to)
{
	int i = 0;
	for (;* from != '\0';from++,to++)
	{
		*to = *from;
	}
	to[i] = '\0';
}
int main()
{
	char* a = "I am a student.";
	char b[]= "You are a teacher.";
	char* p = b;
	printf("string a = %s\nstring b = %s\n", a, b);
	copy_string(a, b);
	printf("\ncopy string a to string b:\n");
	printf("string a = %s\nstring b = %s\n", a, b);

	return 0;
}

/**
string a = I am a student.
string b = You are a teacher.

copy string a to string b:
string a = I am a student.
string b = I am a student.
**/
