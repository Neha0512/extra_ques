#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
ofstream rout("new.txt");//abc.txt
	cout<<"Enter your name"; 
	string name;
	cin>>name;
	rout<<name;
	rout.close();
	
}
