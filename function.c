#define _CRT_SECURE_NO_WARNINGS//
#include <stdio.h>
void fun(char x, int y);
int main()
{
	int j;
	char i;
	printf("����������˺ţ�");
	scanf("%s",&i);
	printf("������������룺");
	scanf("%d",&j);
	fun( i, j);
	return 0;
}
void fun(char x, int y)
{
	if (x == "����" && y == 123)
		printf("��¼�ɹ���");
	else printf("��½ʧ�ܣ�������󣡣���");
}