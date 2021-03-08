
#include <stdio.h>
#include <string.h>

//求n的阶乘 递归
/**
解题思路:求n!可以用递推方法，即从1开始,乘2,再乘.....直乘到n。这种方法容易理解，也容易实现。
递推法的特点是从一一个已知的事实(如1!=1)出发,按一定规律推 出下一个事实(如2!=1! * 2),
再从这个新的已知的事实出发,再向下推出一个新的事实 (3!=3* 2!)。n!=n* (n- 1)!。

求n!也可以用递归方法，即5!等于4!X5,而4!=3!X4,..,1!=1。可用下面的递归公式表示:
             
		 n! = n*(n-1)!       (n>1)
		 
*/
int Fac(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}
int main()
{
	//求n的阶乘
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d", ret);
	return 0;
}
