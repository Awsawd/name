#include <stdio.h>
int main()
{
	int v1 = 0, v2 = 0, v3 = 0, v4 = 0;
	int n;//ͶƱ����
	int i = 1;
	int v;//ҪͶ�ĺ�ѡ�˵ı��
	printf("������μ�ͶƱ������");
	scanf("%d", &n);
	printf("����ÿ�����ƾٵĺ�ѡ�ˣ�������1��2��3���ɣ�\n");
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
			printf("��ЧͶƱ\n");
			i++;
			v4++;
		}
	}
	printf("������£�\n");
	printf("��ѡ��1��%d", v1);
	printf("��ѡ��2��%d", v2);
	printf("��ѡ��3��%d", v3);
	printf("��ЧͶƱ��%d", v4);
	return 0;
}