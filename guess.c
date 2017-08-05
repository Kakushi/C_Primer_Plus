/*guess.c -- 一个很蠢的猜数程序*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int guess = 1;
	char response;
	printf("Pick an integer from 1 to 100. I will try to guess it\n");
	printf("Respond with a y if my guess is right and with n if it is wrong\n");
	printf("Uh...is you number %d?\n", guess);
	while ((response = getchar()) != 'y')
	{
		if (response == 'n')
		{
			printf("Well, then, is it %d?\n", ++guess);
		}
		else
		{
			printf("Sorry, I understand only y or n.\n");
		}
		while (getchar() != '\n')
		{
			continue;
		}
	}
	printf("I knew. I could do it!\n");

	system("pause");
	return 0;
}