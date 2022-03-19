//  O(position)-time complexity

#include<bits/stdc++.h>
using namespace std;
int position(int arr[],int x)
{
	for(int i=0;i<x;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
		else if(arr[i]>x)
		{
			return -1;
		}
	}
}
int main()
{
	int n=6;
	int x=3;
	int arr[]={1,2,3,4,5,6};
	cout<<position(arr, x);
	return 0;
}
