#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"CALCULATOR"<<endl;
	long x;
    long y;
	cout<<"Enter the numbers"<<endl;
	cin>>x;
	cin>>y;
	cout<<"Enter the operation you want to perform + - * / %"<<endl;
		char cal;
	cin>>cal;
	int sum = x+y;
	int difference = x-y;
	long long product = x*y;
	int quotient = x/y;
	int remainder = x%y;
	switch (cal)
	{
		case '+' : cout<<"Sum of "<<x<<" and "<<y<<" is "<<sum;
		break;
			case '-' : cout<<"Difference of "<<x<<" and "<<y<<" is "<<difference;
			break;
			case '*' : cout<<"Product of "<<x<<" and "<<y<<" is "<<product;
			break;
			case '/' : cout<<"Quotient of "<<x<<" and "<<y<<" is "<<quotient;
			break;
			case '%' : cout<<"Remainder of "<<x<<" and "<<y<<" is "<<remainder;
			break;
			default : cout<<"If any match is not found";
	}
}
