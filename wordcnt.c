/*wordcnt.c -- 统计字符、单词和行数*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>		//为bool,true,false定义
#include <ctype.h>			//为isspace()提供原型
#define STOP '|'
int main(void)
{
	char c;					//读入字符
	char prev;				//前一个读入字符
	long n_chars = 0L;		//字符数
	int n_lines = 0;		//行数
	int n_words = 0;		//单词数
	int p_lines = 0;		//不完整行数
	bool inword = false;	//如果c在一个单词中，则isword等于true

	printf("Enter text to be analyzed(| to terminate):\n");
	prev = '\n';			//用于识别完整的行
	while ((c = getchar()) != STOP)
	{
		n_chars++;			//统计字符数
		if (c == '\n')
		{
			n_lines++;		//统计行数
		}
		if (!isspace(c) && !inword)
		{
			inword = true;	//开始一个新单词
			n_words++;		//统计单词数
		}
		if (isspace(c) && inword)
		{
			inword = false;	//结束一个单词
		}
		prev = c;			//保存字符值
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