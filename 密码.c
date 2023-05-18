#include <stdio.h>
#include <string.h>

int main()
{
	char password[20] = { "574827" };
	char pwstr[20];
	int i = 1;
	while (i <= 3)
	{
		printf("请输入密码：\n");                   
		gets(pwstr);
		if (strcmp(password, pwstr))                \\strcmp用于比较两个字符串
		{
			printf("第%d次，密码输入错误！\n", i);
		}
		else
		{
			printf("密码正确，清选择服务！\n");
			break;
		}
		i++;
	}
	if(i==4)
	{
		printf("输入密码错误3次！请到人工处办理解锁\n");
	}
	return 0;
}
