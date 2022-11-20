#include <stdio.h>
int main()
{
	int n;//超市货物的数量
	int i, V;//i用来记录进入超市货物的编号
	int a[100000];//表示第i+1个货物的体积
	int sum = 0;//体积之和
	int m = 0;//进入超市的次数
	scanf("%d", &n);
	scanf("%d", &V);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
		if (i == n - 1 && sum < V)
			m++;
		else if (i == n - 1 && sum > V)
			m = m + 2;
		else if (sum < V)
		{
			sum = sum;
		}
		else if (sum == V)
		{
			sum = 0;
			m++;
		}
		else if (sum > V && a[i] == V)
				{
					sum = 0;
					m = m + 2;
				}
		else if (sum > V)
		{
			sum = a[i];
			m++;
		}
	}
	printf("%d", m);
	return 0;
}
