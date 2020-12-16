#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,*arr;
	cin >> n;
	arr = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		cin >> arr[i];
	
	int resXOR = 0;
	for(int i=0;i<n;i++)
	{
		resXOR = resXOR^arr[i];
	}
	cout << resXOR;
}
