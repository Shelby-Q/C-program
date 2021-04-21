#include <stdio.h>

int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex[10];
		char address[20];
	}student1 = {10101,"阿辉","男","湖北"};
  
	printf("NO.:%ld\nname:%s\nsex:%s\naddress:%s\n", student1.num, student1.name, student1.sex, student1.address);
  
	return 0;
}

/**
NO.:10101
name:阿辉
sex:男
address:湖北
**/
