#include<bits/stdc++.h>
using namespace std;
class employee{
	int salary;
	public:
		string name;
		int id;
		void comp(string s,int y,int a)
		{
			name=s;
			salary=a;
			id=y;
		}
		void display()
		{
		
		cout<<name<<endl;
		cout<<id;
		cout<<salary;
	}

};
int main()
{
	
	employee obj;
//	obj.salary=25;
	obj.name="momo";
	obj.comp("momo",67,54766);
	obj.display();
}
