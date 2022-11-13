#define _CRT_SECURE_NO_WARNINGS//
#include <stdio.h>
void fun(char x, int y);
int main()
{
	int j;
	char i;
	printf("请输入你的账号：");
	scanf("%s",&i);
	printf("请输入你的密码：");
	scanf("%d",&j);
	fun( i, j);
	return 0;
}
void fun(char x, int y)
{
	if (x == "张三" && y == 123)
		printf("登录成功！");
	else printf("登陆失败！密码错误！！！");
}