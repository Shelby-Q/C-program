#include <stdio.h>

int main()
{
        int input_num, i;
        int flag = 0;

        printf("%s: ", "input a number");
        scanf("%d", &input_num);

        for (i = 2;i <= input_num/2; i++)
        {
                if (input_num%i == 0)
                {
                        flag = 1;
                }
        }
        if (flag == 1)
        {
                printf("It is a prime number\n");
        }
        else{
                printf("It is not a prime number\n");
        }
        return 0;
}
