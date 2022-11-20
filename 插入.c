#include <stdio.h>
#include <string.h>
void insert(char s1[100], char s2[100], int f)
{
	int n;
	int i;
	n = strlen(s1);
	for (i = 0; i < n; i++)
	{
		if (i == f)
		{
			printf("%s", s2);
		}
		printf("%c",s1[i]);
	}
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
