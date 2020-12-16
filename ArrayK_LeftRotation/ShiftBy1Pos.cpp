#include<iostream>
#include<stdlib.h>
using namespace std;
// Shifting by 1 position
int main()
{
	int n,k;
	int *arr;
	cout << "Input n : ";
	cin >> n;
	arr = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		cin >> arr[i];
	cout << "Input K : ";
	cin >> k;
	if(k==n)
	{
		for(int i=0;i<n;i++)
			cout << arr[i] << " ";
			exit(1);
	}
	for(int i=0;i<k;i++)
	{	int t,j;
		t = arr[0];
		for(j=0;j<n-1;j++)
		{
			arr[j] = arr[j+1];
		}
		arr[j]=t;
	}
	for(int i=0;i<n;i++)
			cout << arr[i] << " ";
}

