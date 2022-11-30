#include <stdio.h>
int main()
{
	char str1[80],str2[80],str[80];
	char* p, * q, * r, * s;
	int i, j, n;
	printf("Enter string1:");
	gets(str1);
	printf("Enter string2:");
	gets(str2);
	for (p = str1, q = str2, r = str; *p != '\0' && *q != '\0';)
		if (*p < *q)
			*r++ = *p++;
		else
			*r++ = *q++;
	s = (*p != '\0') ? p : q;
	while (*s != '\0')
		*r++ = *s++;
	*r = '\0';
	printf("Result:");
	puts(str);
}
