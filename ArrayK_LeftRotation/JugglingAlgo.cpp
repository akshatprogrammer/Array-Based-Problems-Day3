#include<iostream>
#include<stdlib.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		gcd(b,a%b);		
}
void rotateArray(int arr[],int n,int k)
{
	for(int i=0;i<gcd(n,k);i++)
	{
		int temp,d,j;
		j = i;
		temp = arr[i];
		
		while(1)
		{
			d = (j+k)%n;
			if(d==i)
			{
				break;
			}
			arr[j] = arr[d];
			j = d;
		}
		arr[j]=temp;
	}
}
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
	rotateArray(arr,n,k);

	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
	
}
