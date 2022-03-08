#include<iostream>
using namespace std;
struct node
{
	int id;
	char name[50];
	char qua[50];
	char address[50];
	char city[30];
	char jobtitle[30];
	int salary;
	char date[30];
	node *prev,*next; //these are pointers of node, adress of next and prev nodes are stored
};
class employee
{
	private:
		node *head; //node with pointer head
		char ch;
		public:
			employ()
			{
				head=NULL;
			}
			void menu()
			{
				cout<<"\n\t\t\t WELCOME TO THE EMPLOYEE SYSTEM"<<endl;
				cout<<"\n\t\t\t\t 1- Add a record:"<<endl;
				cout<<"\n\t\t\t\t 2- Search a record:"<<endl;
				cout<<"\n\t\t\t\t 3- Update a record:"<<endl;
				cout<<"\n\t\t\t\t 4- Delete a record:"<<endl;
			    cout<<"\n\t\t\t\t 5- Display a record:"<<endl;
			    	cout<<"\n\t\t\t\t 6- Exit:"<<endl;
				return;
			}
			void first()
			{
				node *newer=new node;
				cout<<"\n\t\t Enter the employee Id:";
				cin>>newer->id;
				 fflush(stdin);

          cout<<"\n\t\t Enter the employee's' Full name :"<<endl;
          cin.getline(newer->name,50);
         fflush(stdin);
          cout<<"\n\t\t Enter the Qualification :"<<endl;
          cin.getline(newer->qua,30);
         fflush(stdin);

          cout<<"\n\t\t Enter the Address of Employee :"<<endl;
          cin.getline(newer->address ,50);
          fflush(stdin);
          cout<<"\n\t\tEnter the City:"<<endl;
         cin.getline(newer->city,30);
          fflush(stdin);

          cout<<"\n\t\tEnter the employee Job title :"<<endl;
         cin.getline(newer->jobtitle,30);
         fflush(stdin);

          cout<<"\n\t\tEnter the Employee the Salary:"<<endl;
          cin>>newer->salary;
          fflush(stdin);


          cout<<"\n\t\t Enter the start Date :"<<endl;
          cin.getline(newer->date,30); //to read input function
          fflush(stdin); //used for output stream



          newer->next=head;
          newer->prev=NULL;
          if(head!=NULL)
          {
          	head->prev=newer;
		  }
		  head=newer;
		  cout<<"\n\t\t Record inserted successfully:"<<endl;
			}
			void last()
			{
				if(head==NULL)
				{
					cout<<"\n\t\t Link is empty:"<<endl;
					cout<<"\n\nt\t Add a new record\n\t Press Y or N:";
					cin>>ch;
					if(ch=='Y' || ch=='y')
					{
						first();
						return;
					}
					else
					{
						exit(1);
					}
				}
				else
				{
					node *temp=head;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					node *newer=new node;
					fflush(stdin);
					cout<<"\n\t\t Enter the employee Id:";
				  cin>>newer->id;
				  fflush(stdin);

                  cout<<"\n\t\t Enter the employee's' Full name :"<<endl;
                   cin.getline(newer->name,50);
                   fflush(stdin);
                   cout<<"\n\t\t Enter the Qualification :"<<endl;
                    cin.getline(newer->qua,30);
                   fflush(stdin);

                   cout<<"\n\t\t Enter the Address of Employee :"<<endl;
                   cin.getline(newer->address ,50);
                   fflush(stdin);
                   cout<<"\n\t\tEnter the City:"<<endl;
         cin.getline(newer->city,30);
          fflush(stdin);

          cout<<"\n\t\tEnter the employee Job title :"<<endl;
         cin.getline(newer->jobtitle,30);
         fflush(stdin);
          cout<<"\n\t\tEnter the Employee the Salary:"<<endl;
          cin>>newer->salary;
          fflush(stdin);


          cout<<"\n\t\t Enter the start Date :"<<endl;
          cin.getline(newer->date,30); //to read input function
          fflush(stdin); 
          
          newer->next=NULL;
          temp->next=newer;
          newer->prev=temp;
				}
			}
			void after()
			{
				if(head==NULL)
				{
					cout<<"\n\t\t List is empty:"<<endl;
					cout<<"\n\t\t Add a new record\n\t Press Y or N:";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						first();
						return;
					}
					else
					{
						exit(1);
					}
					}
					else
					{
						int val;
						cout<<"\n\t\t Enter the Id after which you want to add a new record:";
						cin>>val;
						bool flag=false;
						node *temp=head;
						node*p;
						while(temp!=NULL)
						{
							if(temp->id==val)
							{
								node *newer= new node;
								fflush(stdin);
								cout<<"\n\t\t Enter the employee Id:";
				                cin>>newer->id;
				                fflush(stdin);

                                cout<<"\n\t\t Enter the employee's' Full name :"<<endl;
                                cin.getline(newer->name,50);
                                fflush(stdin);
                                cout<<"\n\t\t Enter the Qualification :"<<endl;
                                cin.getline(newer->qua,30);
                                fflush(stdin);

                                cout<<"\n\t\t Enter the Address of Employee :"<<endl;
                                cin.getline(newer->address ,50);
                                fflush(stdin);
                                cout<<"\n\t\tEnter the City:"<<endl;
                                cin.getline(newer->city,30);
                                fflush(stdin);

                                cout<<"\n\t\tEnter the employee Job title :"<<endl;
                                cin.getline(newer->jobtitle,30);
                                fflush(stdin);
                                cout<<"\n\t\tEnter the Employee the Salary:"<<endl;
                                cin>>newer->salary;
                                fflush(stdin);


                                cout<<"\n\t\t Enter the start Date :"<<endl;
                                cin.getline(newer->date,30); //to read input function
                                fflush(stdin); 
                                if(temp->next!=NULL)
                                {
                                	newer->next=temp->next;
                                 	newer->prev=temp;
                                  	p=temp->next;
                                 	p->prev=newer;
                                 	temp->next=newer;
						        }
          						  else
          						  {
          						  	newer->next=temp->next;
          						  	newer->prev=temp;
          						  	temp->next=newer;
									}
									flag=true;
							}
							temp=temp->next;
						}
						if(flag==false)
						{
							cout<<"\n\t\tId is not found"<<endl;
						}
					}
			}
			void before()
			{
				if(head==NULL)
				{
						cout<<"\n\t\t List is empty:"<<endl;
					cout<<"\n\t\t Add a new record\n\t Press Y or N:";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						first();
						return;
					}
					else
					{
						exit(1);
					}
				}
					else
					{
						int val;
						cout<<"\n\t\t Enter the Id after which you want to add a new record:";
						cin>>val;
						bool flag=false;
						node *temp=head;
						node*p;
						while(temp!=NULL)
						{
							if(temp->id==val)
							{
								node *newer= new node;
								fflush(stdin);
								cout<<"\n\t\t Enter the employee Id:";
				                cin>>newer->id;
				                fflush(stdin);

                                cout<<"\n\t\t Enter the employee's' Full name :"<<endl;
                                cin.getline(newer->name,50);
                                fflush(stdin);
                                cout<<"\n\t\t Enter the Qualification :"<<endl;
                                cin.getline(newer->qua,30);
                                fflush(stdin);

                                cout<<"\n\t\t Enter the Address of Employee :"<<endl;
                                cin.getline(newer->address ,50);
                                fflush(stdin);
                                cout<<"\n\t\tEnter the City:"<<endl;
                                cin.getline(newer->city,30);
                                fflush(stdin);

                                cout<<"\n\t\tEnter the employee Job title :"<<endl;
                                cin.getline(newer->jobtitle,30);
                                fflush(stdin);
                                cout<<"\n\t\tEnter the Employee the Salary:"<<endl;
                                cin>>newer->salary;
                                fflush(stdin);


                                cout<<"\n\t\t Enter the start Date :"<<endl;
                                cin.getline(newer->date,30); //to read input function
                                fflush(stdin); 
                                if(temp->next!=NULL)
                                {
                                	newer->next=temp->next;
                                 	newer->prev=temp;
                                  	p=temp->next;
                                 	p->prev=newer;
                                 	temp->next=newer;
						        }
          						  else
          						  {
          						  	newer->next=temp->next;
          						  	newer->prev=temp;
          						  	temp->next=newer;
									}
									flag=true;
							}
							temp=temp->next;
						}
						if(flag==false)
						{
							cout<<"\n\t\tId is not found"<<endl;
						}
					}
				}
			};
			void del()
			{
					if(head==NULL)
				{
						cout<<"\n\t\t List is empty:"<<endl;
					cout<<"\n\t\t Add a new record\n\t Press Y or N:";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						first();
						return;
					}
					else
					{
						exit(1);
					}
				}
				else
				{
					int val;
					cout<<"\n\t\t Enter the emplyee Id which you want to delete the record:";
					cin>>val;
					node *temp=head;
					bool flag=false;
					if(temp->id==val)
					{
						head=temp->next;
						head->prev=NULL;
						flag=true;
						delete temp;
						if(flag==true)
						{
							cout<<"Record has been deleted successfully"<<endl;
						}
					}
					else
					{
						while(temp!=Null)
						{
							if(temp->id==val)
							{
								node *p,*q;
								if (temp->next==NULL)
								{
									p=temp-prev;
									p->next=NULL;
									flag=true;
									delete temp;
								}
								else
								{
									p=temp->prev;
									q=temp->next;
									p->next=q;
									q->prev=p;
									flag=true;
									delete temp;
								}
							}
							temp=temp->next;
						}
						if(flag==false)
						{
							cout<<"\n\tValue is not found:"<<endl;
						}
					}
				}
			}
			void show()
			{
					if(head==NULL)
				{
						cout<<"\n\t\t List is empty:"<<endl;
					cout<<"\n\t\t Add a new record\n\t Press Y or N:";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						add_first();
						return;
					}
					else
					{
						exit(1);
					}
				}
				else
				{
					node *temp=head;
					while(temp!=NULL)
					{
						cout<<"\n\t\t Information of employee"<<endl;
						cout<"\n\t\t ID:"<<temp->id<<endl;
						cout<<"\n\t\t Name:"<<temp->name<<endl;
						cout<<"\n\t\t Qualification:"<<temp->qua<<endl;
						cout<<"\n\t\t Address:"<<temp->address<<endl;
						cout<<"\n\t\t City:"<<temp->city<<endl;
						cout<<"\n\t\t Job title:"<<temp->jobtitletitle<<endl;
						cout<<"\n\t\t Salary:"<<temp->salary<<endl;
						cout<<"\n\t\t Starting date:"<<temp->date<<endl;
						return;
					}
						
						temp=temp->next;
					}
				}
			void search()
			{
					if(head==NULL)
				{
						cout<<"\n\t\t List is empty:"<<endl;
					cout<<"\n\t\t Add a new record\n\t Press Y or N:";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						add_first();
						return;
					}
					else
					{
						exit(1);
					}
				}
				else
				{
					int val;
					cout<<"\n\t\tEnter employee ID you want to search:";
					cin>>val;
					node *temp=head;
					bool flag=false;
					if(temp->id==val)
					{
						cout<<"\n\t\t Information of employee:"<<endl;
							cout<"\n\t\t ID:"<<temp->id<<endl;
						cout<<"\n\t\t Name:"<<temp->name<<endl;
						cout<<"\n\t\t Qualification:"<<temp->qua<<endl;
						cout<<"\n\t\t Address:"<<temp->address<<endl;
						cout<<"\n\t\t City:"<<temp->city<<endl;
						cout<<"\n\t\t Job title:"<<temp->jobtitletitle<<endl;
						cout<<"\n\t\t Salary:"<<temp->salary<<endl;
						cout<<"\n\t\t Starting date:"<<temp->date<<endl;
						return;
					}
						
						temp=temp->next;
					}
				}
				void update()
				{
						if(head==NULL)
			        	{
						cout<<"\n\t\t List is empty:"<<endl;
					cout<<"\n\t\t Add a new record\n\t Press Y or N:";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						add_first();
						return;
					}
					else
					{
						exit(1);
					}
				}
				else
				{
					int val;
					cout<<"\n\t\t Enter employee id whose record you want to update:";
					cin>>val;
					node *temp=head;
					while(temp!=NULL)
					{
						if(temp->address==val)
						{
							fflush(stdin);
							cout<<"\n\t\t Enter employee id:";
							cin>>temp->id;
							 fflush(stdin);

                                cout<<"\n\t\t Enter the employee's' Full name :"<<endl;
                                cin.getline(temp->name,50);
                                fflush(stdin);
                                cout<<"\n\t\t Enter the Qualification :"<<endl;
                                cin.getline(temp->qua,30);
                                fflush(stdin);

                                cout<<"\n\t\t Enter the Address of Employee :"<<endl;
                                cin.getline(temp->address ,50);
                                fflush(stdin);
                                cout<<"\n\t\tEnter the City:"<<endl;
                                cin.getline(temp->city,30);
                                fflush(stdin);

                                cout<<"\n\t\tEnter the employee Job title :"<<endl;
                                cin.getline(temp->jobtitle,30);
                                fflush(stdin);
                                cout<<"\n\t\tEnter the Employee the Salary:"<<endl;
                                cin>>temp->salary;
                                fflush(stdin);


                                cout<<"\n\t\t Enter the start Date :"<<endl;
                                cin.getline(temp->date,30); //to read input function
                                fflush(stdin); 
						}
						temp=temp->next;
					}
					cout<<"Record has been successfully updated:"<<endl;
				}
			}
};
int main()
{
int n;
char ch;
employee em;
x2:
	em.menu();
	cout<<"\n\t\tEnter your choice:";
	cin>>n;
	if(n==1)
	{
		x1:
			cout<<"\n\t\tWhere you want to add record:"<<endl;
			cout<<"\n\t\t 1- very first record:"<<endl;
			cout<<"\n\t\t 2- very last record:"<<endl;
			cout<<"\n\t\t 3- your location add record to record:"<<endl;
			cout<<"\nt\t\t Enter choice:";
			cin>>n;
			if(n==1)
			{
				em.first();
				cout<<"\n\t\t Do you want to go to main menu:"<<endl;
				cin>>ch;
				fflush(stdin);
				if(ch=='Y'||ch=='y')
				{
					goto x2;
				}
				else
				{
					exit(1);
				}
			}
			else if(n==2)
			{
				em.last();
				cout<<"\n\t\t Do you want to go to main menu:"<<endl;
				cin>>ch;
				fflush(stdin);
				if(ch=='Y'||ch=='y')
				{
					goto x2;
				}
				else
				{
					exit(1);
				}
			}
			else if(n==3)
			{
				
				em.last();
				cout<<"\n\t\t Do you want to go to main menu:"<<endl;
				cin>>ch;
				fflush(stdin);
				if(ch=='Y'||ch=='y')
				{
					goto x2;
				}
				else
				{
					exit(1);
				}
			}
			else if(n==4)
			{
				em.before();
				cout<<"\n\t\t Do you want to go to main menu:"<<endl;
				cin>>ch;
				fflush(stdin);
				if(ch=='Y'||ch=='y')
				{
					goto x2;
				}
				else
				{
					exit(1);
				}
			}
			else
			{
				cout<<"\n\t\t Choose correct answer:"<<endl;
				goto x1;
			}
	}
	else if(n==2)
	{
		em.search();
		cout<<"\n\t\t Do you want to go to main menu:"<<endl;
				cin>>ch;
				fflush(stdin);
				if(ch=='Y'||ch=='y')
				{
					goto x2;
				}
				else
				{
					exit(1);
				}
		
	}
	else if(n==3)
	{
		em.update();
		cout<<"\n\t\t Do you want to go to main menu:"<<endl;
				cin>>ch;
				fflush(stdin);
				if(ch=='Y'||ch=='y')
				{
					goto x2;
				}
				else
				{
					exit(1);
				}
		
	}
	else if(n==4)
	{
		em.del();
		cout<<"\n\t\t Do you want to go to main menu:"<<endl;
		cin>>ch;
	    fflush(stdin);
		if(ch=='Y'||ch=='y')
		{
			goto x2;
			}
	    else
		{
	    	exit(1);
		}
		
	}
	else if(n==5)
	{
		em.show();
		cout<<"\n\t\t Do you want to go to main menu:"<<endl;
				cin>>ch;
				fflush(stdin);
				if(ch=='Y'||ch=='y')
				{
					goto x2;
				}
				else
				{
					exit(1);
				}
		
	}
	else if(n==6)
	{
		exit(1);
	}
	else
	{
		cout<<"\n\t\t Choose the correct answer:"<<endl;
		goto x2;
	}
	return 0;
}
