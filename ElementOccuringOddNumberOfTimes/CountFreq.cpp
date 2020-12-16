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
	int count = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
				count++;	
		}
		if(count%2!=0)
			{
				cout << arr[i] << endl;
				break;
			}	
	}
	
}
