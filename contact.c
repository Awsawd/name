#define _CRT_SECURE_NO_WARNINGS//
//函数的实现
#include "contact.h"
void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset 内存设置
	memset(pc->data,0,sizeof(pc->data));
}

void Addcontact(Contact* pc)//添加
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满,无法添加\n");
		return ;
	}
	printf("请输入名字：>");
	scanf("%s",pc->data[pc->sz].name);
	printf("请输入年龄：>");
	scanf("%d",&(pc->data[pc->sz].age) );
	printf("请输入性别：>");
	scanf("%s",&(pc->data[pc->sz].sex));
	printf("请输入电话：>");
	scanf("%s", &(pc->data[pc->sz].tele));
	printf("请输入地址：>");
	scanf("%s", &(pc->data[pc->sz].addr));
	pc->sz++;
	printf("增加成功\n");
}

void PrintContact(const Contact* pc)//打印
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址");
	//打印数据
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[i].name,
			pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

static int FindByName(Contact* pc,char name[])//查找
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;//没找到
}

void DelContact(Contact* pc)//删除
{
	char name[MAX_NAME];
	if (pc->sz == 0)
	{
		printf("通讯录为空,无需删除\n");
		return ;
	}
	printf("请输入要删除的人的名字：>");
	scanf("%s",name);

	//1.查找要删除的人
	int pos=FindByName(pc,name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//删除
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i+1]; 
	}
	pc->sz--;
	printf("删除成功！\n");
}

void SearchContact(Contact* pc)//查找
{
	char name[MAX_NAME];
	printf("请输入要查找的人的名字：>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
	
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[pos].name,
		pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);
	
}

void ModifyContact(Contact* pc)//修改
{
	char name[MAX_NAME];
	printf("请输入要修改的人的名字：>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
	
		//修改数据
		printf("请输入要修改的名字：>");
		scanf("%s", pc->data[pos].name);
		printf("请输入要修改的年龄：>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入要修改的性别：>");
		scanf("%s", &(pc->data[pos].sex));
		printf("请输入要修改的电话：>");
		scanf("%s", &(pc->data[pos].tele));
		printf("请输入要修改的地址：>");
		scanf("%s", &(pc->data[pos].addr));
		printf("修改成功！！");
	}
	
}