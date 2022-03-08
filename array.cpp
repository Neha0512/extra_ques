#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter no. of elements";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<arr[i-1])
		{
			cout<<"false";
		}
	else{
		cout<<"true";
	}	
	}
}
