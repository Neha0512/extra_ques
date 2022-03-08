#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	int sum=0;
	while(x>0)
	{
		int res = x%10;
		sum=res+sum;
		x=x/10;
	}
	cout<<sum;
}
