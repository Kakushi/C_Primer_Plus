/*summing.c -- ���û�������������*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	long num;
	long sum = 0L;							//��sum��ʼ��Ϊ��
	
	printf("Please enter an integer to be summed.");
	printf("(�������˳�):");
	while (scanf_s("%ld",&num) == 1)		//==����˼�ǡ����ڡ�
	{
		sum = sum + num;
		printf("Please enter next integer���������˳���:");
	}
	printf("Those integers sum to %ld.\n", sum);

	system("pause");
	return 0;
}