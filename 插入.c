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
	printf("�������ַ���s1�����ݣ�");
	scanf("%s",s1);
	printf("�������ַ���s2�����ݣ�");
	scanf("%s",s2);
	printf("�������s1��λ�ã�");
	scanf("%d", &f);
	insert(s1,s2,f);
}
