/*sweetie.c -- һ������ѭ��*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const int NUMBER = 22;
	int count = 1;

	printf("ʹ��whileѭ��\n");
	while (count<=NUMBER)
	{
		printf("Be my Valentine!\n");
		count++;
	}

	printf("\nʹ��forѭ��\n");
	for ( count = 1; count <= NUMBER; count++)
	{
		printf("Be my Valentine!\n");
	}

	system("pause");
	return 0;
}