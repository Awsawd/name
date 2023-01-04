#include <stdio.h>
int main()
{
	int n=0, i;
	struct {
		int no;
		float sc[3];
		float total;
		int rank;
	}temp1[10], temp2;
	for (i = 0; i < 9; i++) {
		float itemp= temp1[n].total;
		int ipos=i;
		for (n = i + 1; n < 10; n++)
		{
			if (temp1[n].total>itemp)
			{
				temp2 = temp1[i];
				ipos = n;
			}
		}
		temp1[ipos].total = temp1[i].total;
		temp1[i].total = itemp;
	}
	return 0;
}
