#include<bits/stdc++.h>
using namespace std;
int sqRoot(int x)
{
	int i=1;
	while(i*i<x)
	{
		i++;
	}
	return (i-1);
}
int main()
{
	int x=65;
	cout<<sqRoot(x);
}
