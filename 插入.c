#include <stdio.h>
#include <string.h>
void insert(char *str1, char *str2, int f)
{
	int i;
	for(i=0;i<f;i++)
	{
		printf("%c",*(str1+i));
	}
		printf("%s",str2);
	puts(str1+f);
}
int main()
{
	char s1[100];
	char s2[100];
	int f;
	printf("请输入字符串s1的内容：");
	scanf("%s",s1);
	printf("请输入字符串s2的内容：");
	scanf("%s",s2);
	printf("输入插入s1的位置：");
	scanf("%d", &f);
	insert(s1,s2,f);
}
