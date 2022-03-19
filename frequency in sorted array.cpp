#include<iostream>
using namespace std;
 int freqSorted(int arr[], int n)
 {
 	int freq=1;
 	for(int i=1; i<n; i++)
 	{
 		if(arr[i+1]==arr[i])
 		{
 			freq++;
 			cout<<arr[i]<<" "<<freq; 
		 }
		 else
		 {
		 	freq=1;
		 }
	 }
 }
 
 int main()
 {
 	int n=5;
 	int arr[n]= {1,2,3,3,4};
 	freqSorted(arr,n);
 }
