
#define _CRT_SECURE_NO_WARNINGS//
#include<stdio.h>//ͳ�����ֳ��ֵĴ���
int main()
{
	int i;
	int a[10], b[10] = { 0 };
	printf("������10��0~9������Ԫ�أ�\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);                             //��������Ԫ��
	}

	//ͳ������Ԫ��
	for (i = 0; i < 10; i++)
	{
		b[a[i]]++;
	}
	printf("-------------\n");
	for (i = 0; i < 10; i++)
	{
		printf("|%d���ֵĴ���%d:|\n",i,b[i]);
	}
	printf("-------------\n");
	return 0;
}