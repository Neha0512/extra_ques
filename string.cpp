#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1="good morning";
	transform(s1.begin(),s1.end(),s1.begin(),::toupper);
	cout<<s1<<endl;
	sort(s1.begin(),s1.end(),greater<int>());
	cout<<s1[0];
	
}
