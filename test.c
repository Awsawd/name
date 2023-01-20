//测试通讯录的模块
#define _CRT_SECURE_NO_WARNINGS//
#include "contact.h"

void menu()
{
	printf("********************************\n");
	printf("******  1.add     2.del   ******\n");
	printf("******  3.search  4.modify******\n");
	printf("******  5.sort    6.print ******\n");
	printf("******  0.exit            ******\n");
	printf("********************************\n");
	
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;
	InitContact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://增加个人信息
			Addcontact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("退出通讯录");
			break;
		default:
			printf("err");
			break;

		}
	} while (input);
	
	return 0;
}