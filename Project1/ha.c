#include <stdio.h>
int main()
{
	int v1 = 0, v2 = 0, v3 = 0, v4 = 0;
	int n;//投票人数
	int i = 1;
	int v;//要投的候选人的标号
	printf("请输入参加投票人数：");
	scanf("%d", &n);
	printf("输入每个人推举的候选人：（输入1、2、3即可）\n");
	while (i != n)
	{
		scanf("%d", &v);
		if (v == 1)
			v1++, i;
		else if (v == 2)
			v2++, i++;
		else if (v == 3)
			v3++, i++;
		else
		{
			printf("无效投票\n");
			i++;
			v4++;
		}
	}
	printf("结果如下：\n");
	printf("候选人1：%d", v1);
	printf("候选人2：%d", v2);
	printf("候选人3：%d", v3);
	printf("无效投票：%d", v4);
	return 0;
}