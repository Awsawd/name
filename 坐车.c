#include <stdio.h>
int main()
{
	int a[5] = { 5,10,15,20,25 };
	int n, m;
	printf("请输入任意两站:\n");
	scanf("%d",&n);
	scanf("%d",&m);
	printf("两站之间行车需要%d分钟",a[n-1]-a[m-1]);
	
	printf("随便新加一句话\n");
	return 0;
	
}
