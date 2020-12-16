#include<iostream>
#include<stdlib.h>
using namespace std;
// Extra Space Method
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
	int *temp;
	temp = (int *)malloc(sizeof(int)*k);
	if(k > n)
	k = k%n;
	for(int i=0;i<k;i++)
	{
		temp[i] = arr[i];
	}
	for(int i=0;i<n-k;i++)
	{
		arr[i] = arr[i+k];
	}
	for(int i=n-k,j=0;i<n;i++,j++)
	{
		arr[i] = temp[j];
	}
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	
	free(arr);
	free(temp);
	
	
}
