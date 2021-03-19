#include <stdio.h>

//演示实例 
int main() {

int n = 10;
char* pc = (char*)&n; 
int* pi = &n;
printf("%p\n", &n);
printf("%p\n", pc);
printf("%p\n", pc + 1);
printf("%p\n", pi);
printf("%p\n", pi + 1);

return 0;
}
