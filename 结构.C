#include <stdio.h>
struct Car
{
	char brand[10];
	char color[10];
	float Long;
	int load;
}car = { "路虎","黑色",4.85,5};
int main()
{
	printf("车牌名：%s\n",car.brand);
	printf("颜色是：%s\n",car.color);
	printf("车长：%.2f\n",car.Long);
	printf("可承载%d人\n",car.load);
	return 0;
}
