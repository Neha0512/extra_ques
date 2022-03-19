#include<bits/stdc++.h>
using namespace std;
int rotatedArr(int arr[],int x, int n)
{
 int low=0;
   int high=n-1;
   while(low<=high)
   {
	int mid=(low+high)/2;
	if(arr[mid]==x)
	return mid;
	if(arr[mid]>arr[low])
	{
	if(x>=arr[low] && x<arr[mid])
	high=mid-1;
	else
	low=mid+1;	
	}
		else{
		if(x>arr[mid] && x<=arr[high])
		low=mid+1;
		else
		high=mid-1;
	}
}
	return -1;
}
int main()
{
	int n=8;
	int arr[]={2,4,8,10,11,15,0,1};
	int x=15;
	cout<<rotatedArr(arr,x,n);
	return 0;
}
