#include <stdio.h>
#include <stdlib.h>

typedef struct Application
{
	char name[100];
	int num;
	struct Application* pNext;
}Application;

int Count;

Application* Creat()
{
	Application* pHead = NULL;
	Application* pNew, * pEnd;
	Count = 0;
	pNew = pEnd = (Application*)malloc(sizeof(Application));
	printf("请输入集卡集福App名字:\n");
	printf("（若要退出，请输入：exit 0）\n");
	scanf("%s",&pNew->name);
	scanf("%d", &pNew->num);
	while (pNew->num!=0)
	{
		Count++;
		if (Count = 1)
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
		pNew = (Application*)malloc(sizeof(Application));
		scanf("%s", &pNew->name);
		scanf("%d", &pNew->num);
	}
	free(pNew);
	return pHead;
}

void Print(Application* pHead)
{
	Application* pTemp;
	int sz = 1;
	pTemp = pHead;
	printf("----一共有%d个App----\n",Count);
	printf("\n");
	while (pTemp!=NULL)
	{
		printf("NO%d 个App\n",sz);
		printf("名字是：%s\n",pTemp->name);
		printf("第%d个\n",pTemp->num);
		sz++;
		pTemp = pTemp->pNext;
	}

}

int main()
{
	Application* pHead;
	pHead = Creat();
	Print(pHead);
	return 0;
}
