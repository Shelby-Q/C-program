//指向结构体变量的指针

int main()
{
	struct Student
	{
		long num;
		char name[20];
		char sex[10];
		float score;
	};
	struct Student stu_1;
	struct Student* p;						//定义指向struct Student类型数据的指针变量p
	p = &stu_1;								//p指向stu_1
	stu_1.num = 110;
	strcpy(stu_1.name, "阿辉");
	strcpy(stu_1.sex, "男");
	//stu_1.sex = "男";
	stu_1.score = 89.00;

	printf("NO.:%d\nname:%s\nsex:%s\nscore:%.2f\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
	printf("\nNO.:%d\nname:%s\nsex:%s\nscore:%.2f\n", (*p).num, (*p).name, (*p).sex, (*p).score);
	return 0;
}

/**

NO.:110
name:阿辉
sex:男
score:89.00

NO.:110
name:阿辉
sex:男
score:89.00

**/
