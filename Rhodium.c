/*Rhodium.c -- �ý����������������*/
#include <stdio.h>
int	main(void)
{
	float weight;
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's cheak it out.\n");
	printf("Please enter your weight in pounds:");
	/*���û�����ȡ����*/
	scanf_s("%f", &weight);
	/*������ÿ��˾770��Ԫ*/
	/*14.5833�ѳ����Ƶ�Ӣ��ת��Ϊ����Ƶİ�˾*/
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("You are easily worth that! If rhodium prices drop.\n");
	printf("eat mor to maintain your value.\n");

	getchar();
	getchar();
	return 0;
}