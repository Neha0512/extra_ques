#include<bits/stdc++.h>
using namespace std;
bool getSum(int arr[], int n, int x)
{
	int left=0;
	int right=n-1;
	
	while(left<=right)
	{
		if((arr[left]+arr[right])==x)
		return true;
		else if((arr[left]+arr[right])>x)
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
	int x=3;
	cout<<getSum(arr,n,x);
}
