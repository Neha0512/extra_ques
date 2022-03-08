#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
    if(x%2==0||x%3==0)
    {
    	cout<<"not prime";
	}
	for(int i =5;i<x;i++)
	{
		x%i==0;
		cout<<"not prime";
	}
	cout<<"prime";
	}
