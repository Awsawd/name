//���Ͷ��塢��������
#include <stdio.h>
#include <string.h>


#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

typedef struct Peoinfo//ÿ���˵���Ϣ
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

typedef struct Contact//������ͨѶ¼
{
	Peoinfo data[MAX];//��ӽ������˵���Ϣ
	int sz;//��¼��ǰ�ж�����(��Ч��Ϣ�ĸ���)
}Contact;

void InitContact(Contact* pc);//	��ʼ��ͨѶ¼
void Addcontact(Contact* pc);//����һ����ϵ����Ϣ
void PrintContact(const Contact* pc);//��ӡ��ϵ����Ϣ
void DelContact(Contact* pc);//ɾ��һ���˵���Ϣ
void SearchContact(Contact* pc);//����һ���˵���Ϣ
void ModifyContact(Contact* pc);//�޸�һ���˵���Ϣ