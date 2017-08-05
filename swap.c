/*swap.c -- 使用指针完成交换*/
#include <stdio.h>
#include <stdlib.h>
void interchange(int * u, int * v);
int main(void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d\n", x, y);
	interchange(&x, &y);		/*向函数传送地址*/
	printf("Now x = %d and y = %d. \n", x, y);

	system("pause");
	return 0;
}

void interchange(int * u, int * v)
{
	int temp;

	temp = *u;					/*temp得到u指向的值*/
	*u = *v;
	*v = temp;
}