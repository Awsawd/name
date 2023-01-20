#define _CRT_SECURE_NO_WARNINGS//
//������ʵ��
#include "contact.h"
void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset �ڴ�����
	memset(pc->data,0,sizeof(pc->data));
}

void Addcontact(Contact* pc)//���
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����,�޷����\n");
		return ;
	}
	printf("���������֣�>");
	scanf("%s",pc->data[pc->sz].name);
	printf("���������䣺>");
	scanf("%d",&(pc->data[pc->sz].age) );
	printf("�������Ա�>");
	scanf("%s",&(pc->data[pc->sz].sex));
	printf("������绰��>");
	scanf("%s", &(pc->data[pc->sz].tele));
	printf("�������ַ��>");
	scanf("%s", &(pc->data[pc->sz].addr));
	pc->sz++;
	printf("���ӳɹ�\n");
}

void PrintContact(const Contact* pc)//��ӡ
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
	//��ӡ����
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[i].name,
			pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

static int FindByName(Contact* pc,char name[])//����
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;//û�ҵ�
}

void DelContact(Contact* pc)//ɾ��
{
	char name[MAX_NAME];
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��,����ɾ��\n");
		return ;
	}
	printf("������Ҫɾ�����˵����֣�>");
	scanf("%s",name);

	//1.����Ҫɾ������
	int pos=FindByName(pc,name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i+1]; 
	}
	pc->sz--;
	printf("ɾ���ɹ���\n");
}

void SearchContact(Contact* pc)//����
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
	
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[pos].name,
		pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);
	
}

void ModifyContact(Contact* pc)//�޸�
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ��˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
	
		//�޸�����
		printf("������Ҫ�޸ĵ����֣�>");
		scanf("%s", pc->data[pos].name);
		printf("������Ҫ�޸ĵ����䣺>");
		scanf("%d", &(pc->data[pos].age));
		printf("������Ҫ�޸ĵ��Ա�>");
		scanf("%s", &(pc->data[pos].sex));
		printf("������Ҫ�޸ĵĵ绰��>");
		scanf("%s", &(pc->data[pos].tele));
		printf("������Ҫ�޸ĵĵ�ַ��>");
		scanf("%s", &(pc->data[pos].addr));
		printf("�޸ĳɹ�����");
	}
	
}