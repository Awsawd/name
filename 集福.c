#include <stdio.h>
#include <stdlib.h>

typedef struct Fu
{
	char name[100];
	int num;
	struct Fu* pNext;
}Fu;

int Count;

Fu* Creat()
{
	Fu* pHead = NULL;
	Fu* pNew, * pEnd;
	pNew = pEnd = (Fu*)malloc(sizeof(Fu));
	printf("你搜集到了哪些福？\n");
	printf("（若要退出则输入：exit 0）\n");
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->num);
	int Count = 0;
	while (pNew->num!=0)
	{
		Count++;
		if (Count == 1)
		{
			pNew->pNext = pHead;
			pEnd = pNew;
			pHead = pNew;
		}
		else
		{
			pNew->pNext = NULL;
			pEnd->pNext = pNew;
			pEnd = pNew;
		}
		pNew = (Fu*)malloc(sizeof(Fu));
		scanf("%s", &pNew->name);
		scanf("%d", &pNew->num);
		Count++;
	}
	free(pNew);
	return pHead;
}

void Print(Fu* pHead)
{
	int sz=1;
	Fu* Temp;
	Temp = (Fu*)malloc(sizeof(Fu));
	Temp = pHead;
	printf("一共有%d个福\n",Count);
	printf("\n");
	while (Temp!=NULL)
	{
		printf("第%d个福是:",sz);
		printf("%s\n",Temp->name);
		printf("%d\n",Temp->num);
		printf("\n");
		Temp = Temp->pNext;
		sz++;
	}
}

int main()
{
	Fu* pHead;
	pHead = Creat();
	Print(pHead);
	return 0;
}
