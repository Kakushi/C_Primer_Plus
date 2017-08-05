/*Rhodium.c -- 用金属铑衡量您的体重*/
#include <stdio.h>
int	main(void)
{
	float weight;
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's cheak it out.\n");
	printf("Please enter your weight in pounds:");
	/*从用户处获取输入*/
	scanf_s("%f", &weight);
	/*假设铑每盎司770美元*/
	/*14.5833把常衡制的英镑转换为金衡制的盎司*/
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("You are easily worth that! If rhodium prices drop.\n");
	printf("eat mor to maintain your value.\n");

	getchar();
	getchar();
	return 0;
}