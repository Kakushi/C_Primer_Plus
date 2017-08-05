/*binary.c -- �Զ�������ʽ�������*/
#include <stdio.h>
#include <stdlib.h>
void to_binary(unsigned long n);
int main(void)
{
	unsigned long number;
	printf("Enter an integer(q to quit):\n");
	while (scanf_s("%ul",&number) == 1)
	{
		printf("Binary equivalent:");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer(q to quit):\n");
	}
	printf("Bye.\n");

	system("pause");
	return 0;
}

void to_binary(unsigned long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
	{
		to_binary(n / 2);
	}
	putchar('0' + r);

	return;
}