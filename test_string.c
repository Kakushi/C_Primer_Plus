/*test_string.c -- 测试string.h字符串函数*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30
#define LISTSIZE 5
#define DEF1 "I'm a define string."					//19字节
#define DEF2 "Third string"
int main(void)
{
	char First[SIZE] = "First string.";					//13字符			
	char Second[SIZE] = "Second string.";				//14字符
	char Third[] = "Third string.";
	char same[] = "Third string.";
	char temp[SIZE];
	char * ptr;
	ptr = temp;
	char * name = "kakushi";
	int  years = 20;
	char str[SIZE];
	/*使用strlen()函数*/
	printf("string long = %d\n", strlen(DEF1));

	/*使用strcat_s()函数*/							//First[]必须分配足够空间，否则会越界
	strcat_s(First, SIZE, Second);					//第二个参数为str+addon长度
	printf("%s\n", First);
	
	/*使用strncat()函数*/								
	strncat_s(Second, SIZE, Third, SIZE);
	printf("%s\n", Second);

	/*使用strcmp()函数*/
	//if (!strcmp(Third, DEF2))	//无效
	if (!strcmp(Third, same))
	{
		printf("strcmp() succees\n");
	}

	/*使用strncmp()函数*/
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

	/*使用strcpy()函数*/
	strcpy_s(temp, SIZE, First);
	puts(temp);

	/*使用strncpy()函数*/
	strncpy_s(temp, SIZE, First, SIZE);
	puts(temp);

	/*使用sprintf()函数*/
	sprintf_s(str,SIZE, "%s%10d", name, years);
	puts(str);


	system("pause");
	return 0;
}