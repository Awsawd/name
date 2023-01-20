//类型定义、函数申明
#include <stdio.h>
#include <string.h>


#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

typedef struct Peoinfo//每个人的信息
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

typedef struct Contact//真正的通讯录
{
	Peoinfo data[MAX];//添加进来的人的信息
	int sz;//记录当前有多少人(有效信息的个数)
}Contact;

void InitContact(Contact* pc);//	初始化通讯录
void Addcontact(Contact* pc);//增加一个联系人信息
void PrintContact(const Contact* pc);//打印联系人信息
void DelContact(Contact* pc);//删除一个人的信息
void SearchContact(Contact* pc);//查找一个人的信息
void ModifyContact(Contact* pc);//修改一个人的信息