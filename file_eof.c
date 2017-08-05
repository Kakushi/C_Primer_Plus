/*file_eof.c -- 打开一个文件并显示内容*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ch;
	FILE *fp;
	char fname[50];

	printf("Enter the name of the file:");
	scanf_s("%s", fname, sizeof(fname));
	fopen_s(&fp,fname, "r");
	if (fp == NULL)
	{
		printf("Failed to open file. Bye\n");
		exit(1);
	}
	//getc(fp)从文件中获得一个字符
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	system("pause");
	return 0;
}