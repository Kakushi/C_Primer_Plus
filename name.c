/*name.c -- ʹ��gets()��fgets()������ȡһ������*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main(void)
{
	char name[MAX];
	char * ptr;
	printf("ʹ��gets()\n");
	printf("Hi, what's your name?\n");
	ptr = gets_s(name, sizeof(name));
	printf("%s? Ah! %s\n", name, ptr);

	printf("ʹ��fgets()\n");
	printf("Hi, what's your name?\n");
	ptr = fgets(name,MAX, stdin);			//���滻�з�����������
	printf("%s? Ah! %s\n", name, ptr);

	system("pause");
	return 0;
}