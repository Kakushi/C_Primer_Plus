/*wordcnt.c -- ͳ���ַ������ʺ�����*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>		//Ϊbool,true,false����
#include <ctype.h>			//Ϊisspace()�ṩԭ��
#define STOP '|'
int main(void)
{
	char c;					//�����ַ�
	char prev;				//ǰһ�������ַ�
	long n_chars = 0L;		//�ַ���
	int n_lines = 0;		//����
	int n_words = 0;		//������
	int p_lines = 0;		//����������
	bool inword = false;	//���c��һ�������У���isword����true

	printf("Enter text to be analyzed(| to terminate):\n");
	prev = '\n';			//����ʶ����������
	while ((c = getchar()) != STOP)
	{
		n_chars++;			//ͳ���ַ���
		if (c == '\n')
		{
			n_lines++;		//ͳ������
		}
		if (!isspace(c) && !inword)
		{
			inword = true;	//��ʼһ���µ���
			n_words++;		//ͳ�Ƶ�����
		}
		if (isspace(c) && inword)
		{
			inword = false;	//����һ������
		}
		prev = c;			//�����ַ�ֵ
	}
	if (prev != '\n')
	{
		p_lines = 1;
	}
	printf("characters = %d, words = %d, lines = %d.", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);

	system("pause");
	return 0;
}