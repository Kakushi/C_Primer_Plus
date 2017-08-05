/*name.c -- 使用gets()和fgets()函数读取一个名字*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main(void)
{
	char name[MAX];
	char * ptr;
	printf("使用gets()\n");
	printf("Hi, what's your name?\n");
	ptr = gets_s(name, sizeof(name));
	printf("%s? Ah! %s\n", name, ptr);

	printf("使用fgets()\n");
	printf("Hi, what's your name?\n");
	ptr = fgets(name,MAX, stdin);			//储存换行符。。。。。
	printf("%s? Ah! %s\n", name, ptr);

	system("pause");
	return 0;
}