#include<bits/stdc++.h>
using namespace std;
 int peakElement(int arr[], int n)
 {
 	if(n==1)
 	return arr[0];
 	if(arr[0]>arr[1])
 	return arr[0];
 	if(arr[n-1]>arr[n-2])
 	return arr[n-1];
 for(int i=0;i<n;i++)
 {
 	if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
 	return arr[i];
 }
 return -1;
 }
 
 int main()
 {
 	int n=6;
 	int arr[]={2,6,9,3,7,4};
 	cout<<peakElement(arr, n);
 	return 0;
 }
