#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int flag=0;
	for(int i =2;i<x;i++)
	{
		x%i==0;
		cout<<"not prime";
		flag=1;
		break;
		
	}
	if(flag==0){
		
	
	cout<<"prime";
}
	}
	
