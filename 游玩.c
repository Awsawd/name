#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int Count;
typedef struct Student
{
	char Name[MAX];
	int number;
	struct Student* pNext;
}Student;

Student* Create()
{
	Count = 0;
	Student* pHead = NULL;
	Student* pNew, * pEnd;
	pEnd = pNew = (Student*)malloc(sizeof(Student));
	printf("请输入张敏北京一日游观光的地点:\n");
	printf(" 退出请输出:exit 0\n");
	scanf("%s",&pNew->Name);
	scanf("%d",&pNew->number);
	
	while (pNew->number!=0)
	{
		Count++;
		if (Count==1)
		{
			pNew->pNext = NULL;
			pEnd = pNew;
			pHead = pNew;
		}
		else
		{
			pNew->pNext = NULL;
			pEnd->pNext = pNew;
			pEnd = pNew;
		}
		pNew = (Student*)malloc(sizeof(Student));
		scanf("%s", &pNew->Name);
		scanf("%d", &pNew->number);
	}
	free(pNew);
	pNew = NULL;
	return pHead;
}

void Print(Student* pHead)
{
	Student* pTemp;
	int sz = 1;
	printf("----the List has %d members\n",Count);
	pTemp = pHead;	
	while (pTemp!=NULL)
	{
		printf("the NO%d member is:\n",sz);
		printf("地点是：%s\n", pTemp->Name);
		printf("第%d个参观\n", pTemp->number);
		printf("\n");
		pTemp = pTemp->pNext;			
		sz++;
	}
	
}

int main()
{
	Student* pHead;
	pHead = Create();
	Print(pHead);
	return 0;
}
