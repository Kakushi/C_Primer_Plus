/*strings.c -- ʹ���ַ������û�����*/
#include <stdio.h>
#include <stdlib.h>
#define MSG "You must have many talents. Tell me some."			//һ�������ַ�������
#define LIM 5
#define LINELEN 81												//����ַ���+1
int main(void)
{
	char name[LINELEN];
	char talents[LINELEN];
	int i;
	const char m1[40] = "Limit yourself to one line's worth.";	//��ʼ��һ����С�Ѿ�ȷ����char����
	const char m2[] = "If you can't think of anything , fake it.";//�ñ��������������С
	const char *m3 = "\nEnough about me - what's your name?";	//��ʼ��һ��ָ��
	const char *mytal[LIM] = { "Adding numbers swiftly",		//��ʼ��һ���ַ���ָ�������
		"Multiplying accurately",
		"Stashing data",
		"Following instructions to the letter",
		"understanding the C language" };

	printf("Hi! I'm Clyde the computer.""I have many talents.\n");
	puts("What were they? Ah, yes, here's a partial list.");
	for ( i = 0; i < LIM; i++)
	{
		puts(mytal[i]);											//��ӡ����������б�
	}
	puts(m3);
	gets_s(name, sizeof(name));
	printf("Well, %s, %s\n", name, MSG);
	printf("%s\n%s\n", m1, m2);
	gets_s(talents, sizeof(talents));
	puts("Let's see if I've got that list:");
	puts(talents);
	printf("Thanks for the information, %s.\n", name);

	system("pause");
	return 0;
}