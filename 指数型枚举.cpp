#include <iostream>
using namespace std;

int arr[10];


void print_result(int n)
{ 
	for (int i=0;i<n;i++)
	{
		if (i) cout <<" ";
		cout << arr[i];
	}
	cout << endl;
	return ;
}

void f(int i,int j,int n,int m)
{
	if (i == m) {
		print_result(m);
		return ;
	}
	for (int k=j;k<=n&&m-i-1<=n-k;k++)
	{
		arr[i] = k;
		f(i + 1, k + 1, n, m);
		
	}
	
	return;
}


int main()
{
	int n,i,j,m;//有n个数，从中选取m个
	
	cin >> n>>m;

	f(0,1,n,m);

	return 0;
}
