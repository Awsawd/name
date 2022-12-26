#include<stdio.h>
struct pet
{
	char name[10];
	int age;
	float weight;
	char sex[10];
}cat[5] = { {"糖块",1,4.90,"公"},
			{"小点",1,3.50,"公"},
			{"团团",1,3.90,"母"},
			{"琉球",1,3.70,"公"},
			{"点点",1,3.30,"母"} };
int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("猫名：%s\n", cat[i].name);
		printf("猫龄：%d\n", cat[i].age);
		printf("猫体重：%.2f\n", cat[i].weight);
		printf("猫的性别：%s\n", cat[i].sex);
		printf("-------------------------------\n");
	}
	return 0;
}
