//定义简单结构体

struct Person
{
	char name[20];
	int count;			                                      //票数
}leader[3] = {"阿辉",0,"阿旺",0,"阿姨",0};

int main()
{
	int i, j;
	char leader_name[20];
	printf("请输入候选人名字：\n");
	for (i=1;i<=10;i++)
	{
		scanf("%s", leader_name);                           //输入所选的候选人的姓名
		for (j=0;j<3;j++)
		{
			if (strcmp(leader_name, leader[j].name) == 0)
			{
				leader[j].count++;
			}
		}
	}
	printf("\nResult:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}
/**
请输入候选人名字：
阿辉
阿辉
阿辉
阿辉
阿辉
阿旺
阿旺
阿旺
阿姨
阿姨

Result:
阿辉:5
阿旺:3
阿姨:2
**/
