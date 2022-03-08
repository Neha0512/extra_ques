#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int n;
	cin>>n;
	int sum=0;
   while(n>0)
    {
	int ans=n%10;
   	sum=sum+ans;
   	n=n/10;
    }
	 cout<<sum;	
	return 0;
}

