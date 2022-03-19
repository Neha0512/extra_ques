#include<bits/stdc++.h>
using namespace std;
bool getSum(int arr[], int n, int x)
{
	int left=0;
	int right=n-1;
		for(int i=0;i<n;i++)
	while(left<=right)
	{
	
		if((arr[left]+arr[right]+arr[i])==x)
		return true;
		else if((arr[left]+arr[right]+arr[i])>x)
		right--;
		else
		left++;
		
	}
	return false;
}

int main()
{
	int n=7;
	int arr[]={2,5,7,16,24,26,34};
	int x=14;
	cout<<getSum(arr,n,x);
}
