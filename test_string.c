/*test_string.c -- ����string.h�ַ�������*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30
#define LISTSIZE 5
#define DEF1 "I'm a define string."					//19�ֽ�
#define DEF2 "Third string"
int main(void)
{
	char First[SIZE] = "First string.";					//13�ַ�			
	char Second[SIZE] = "Second string.";				//14�ַ�
	char Third[] = "Third string.";
	char same[] = "Third string.";
	char temp[SIZE];
	char * ptr;
	ptr = temp;
	char * name = "kakushi";
	int  years = 20;
	char str[SIZE];
	/*ʹ��strlen()����*/
	printf("string long = %d\n", strlen(DEF1));

	/*ʹ��strcat_s()����*/							//First[]��������㹻�ռ䣬�����Խ��
	strcat_s(First, SIZE, Second);					//�ڶ�������Ϊstr+addon����
	printf("%s\n", First);
	
	/*ʹ��strncat()����*/								
	strncat_s(Second, SIZE, Third, SIZE);
	printf("%s\n", Second);

	/*ʹ��strcmp()����*/
	//if (!strcmp(Third, DEF2))	//��Ч
	if (!strcmp(Third, same))
	{
		printf("strcmp() succees\n");
	}

	/*ʹ��strncmp()����*/
	char * list[LISTSIZE] = {
		"astronomy","astounding","astrophysics","ostracize","asterism"
	};
	for (int i = 0; i < LISTSIZE; i++)
	{
		if (strncmp(list[i],"astro",5) == 0)
		{
			printf("Found: %s\n", list[i]);
		}
	}

	/*ʹ��strcpy()����*/
	strcpy_s(temp, SIZE, First);
	puts(temp);

	/*ʹ��strncpy()����*/
	strncpy_s(temp, SIZE, First, SIZE);
	puts(temp);

	/*ʹ��sprintf()����*/
	sprintf_s(str,SIZE, "%s%10d", name, years);
	puts(str);


	system("pause");
	return 0;
}