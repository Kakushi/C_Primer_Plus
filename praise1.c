/*praise1.c -- ʹ�ò�ͬ���͵��ַ���*/
#include <stdio.h>
#define PRAISE "What a super marvelous name!"
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf_s("%s", name, sizeof(name));
	printf("Hello, %s. %s\n", name, PRAISE);

	getchar();
	getchar();
	return 0;
}