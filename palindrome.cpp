#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	int res=0;

	cout<<"enter the number";
	cin>>x;
	int n=x;
	while(x>0)
	{
		int sum=x%10;
		res=(res*10)+sum;
		x=x/10;
	}
	if(n==res)
	cout<<"yes";
	else
	cout<<"no";

}
