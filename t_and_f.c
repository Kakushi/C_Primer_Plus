/*t_and_f.c -- C中的真和假*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int true_val, false_val;

	true_val = (10 > 2);		/*一个真表达式*/
	false_val = (10 == 2);		/*一个假表达式*/
	printf("true = %d; false = %d \n", true_val, false_val);

	system("pause");
	return 0;
}