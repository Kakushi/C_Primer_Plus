/*array.c -- �����ʼ��*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define HIGH 10
#define WEIGH 10

int main(void)
{
	int i,j;
	int no_data[SIZE];								//δ��ʼ��������ȫ��δ֪
	int some_data[SIZE] = { 1492,1066 };			//���ֳ�ʼ�������ಿ��Ϊ0
	int special_data[SIZE] = { 31,28,[4] = 31,30,31,[1] = 29 };
													//ָ�����ֳ�ʼ�������ಿ��Ϊ0
	int TD_array[HIGH][WEIGH];						//��ά������һά����
	printf("%2s%15s\n", "i", "no_data[i]");
	for ( i = 0; i < SIZE; i++)
	{
		printf("%2d%14d\n", i, no_data[i]);
	}

	putchar('\n');
	printf("%2s%15s\n", "i", "some_data[i]");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d%14d\n", i, some_data[i]);
	}

	putchar('\n');
	printf("%2s%15s\n", "i", "special_data[i]");
	for (i = 0; i < SIZE; i++)
	{
		printf("%2d%14d\n", i, special_data[i]);
	}

	putchar('\n');
	printf("%2s%2s%15s\n", "i","j", "special_data[i]");
	for (i = 0; i < HIGH; i++)
	{
		for ( j = 0; j < WEIGH; j++)
		{
			printf("%2d%2d%14d\n", i, j, TD_array[i][j]);
		}

	}
	system("pause");
	return 0;
}