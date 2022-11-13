
#define _CRT_SECURE_NO_WARNINGS//
#include<stdio.h>//统计数字出现的次数
int main()
{
	int i;
	int a[10], b[10] = { 0 };
	printf("请输入10个0~9的数组元素：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);                             //输入数组元素
	}

	//统计数组元素
	for (i = 0; i < 10; i++)
	{
		b[a[i]]++;
	}
	printf("-------------\n");
	for (i = 0; i < 10; i++)
	{
		printf("|%d出现的次数%d:|\n",i,b[i]);
	}
	printf("-------------\n");
	return 0;
}