/*cypher2.c -- �ı����룬ֻ�������ַ��ַ�*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>						//Ϊisalpha()�ṩԭ��
int	main(void)
{
	char ch;

	while ((ch = getchar())!='\n')
	{
		if (isalpha(ch))				//�����һ����ĸ
		{	
			putchar(ch + 1);			//��ı���
		}
		else							//����
		{
			putchar(ch);				//ԭ����ӡ��
		}
	}
	putchar(ch);						//��ӡ���з�

	system("pause");
	return 0;
}