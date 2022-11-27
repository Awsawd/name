#include <stdio.h>
void _strcopy(char* str1,  char* str2);
int main()
{
	char str1[] = "you are beautiful";
	char str2[] = "";
	_strcopy(str1,str2);
	printf("复制后的字符串为:%s\n",str2);
	return 0;
}
void _strcopy(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		*str2 = *str1;
		str1++;
		str2++;
	}
	*str2 = '\0';
}
