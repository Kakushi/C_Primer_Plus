/*pizza.c -- 定义常量*/
#include <stdio.h>
#define PI 3.14159
int main(void)
{
	float area, circum, radiuns;

	printf("What is the radius of your pizza?\n");
	scanf_s("%f", &radiuns);
	area = PI*radiuns*radiuns;
	circum = 2.0*PI*radiuns;
	printf("Your basic pizza parameters are as follows: \n");
	printf("circumference = %1.2f. area = %1.2f\n", circum, area);

	getchar();
	getchar();
	return 0;
}