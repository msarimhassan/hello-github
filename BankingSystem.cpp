#include<iostream>
#include<cstring>
using namespace std;
template <class t>
struct node
{
	t accountno;
	string name;
	double amount;
	node *next;
	node *previous;
	public:
		node()
		{
			next=0;
			previous=0;
		}
		node(t val,string n,double am)
		{
			accountno=val;
			name =n;
			amount=am;
			next=0;
			previous=0;
		}

};
template <class t>
class LDLL
{
	node<t>*head;
	t counter;
	public:
		LDLL()
		{
			head=0;
		}
		void insertathead( t val,string n)
		{
			node <t>*temp=new node<t>(val,n);
			if(head==0)
			{
				head=temp;
				return;
			} 
			 head->previous=temp;
			 temp->next=head;
			 head=temp;
		}
		void addrecord(t val,string n,double am)
		{
			node <t>*p=new node<t>(val,n,am);
			if(head==0)
			{
				head=p;
				return;
			}
			node <t>*temp=head;
			while(temp->next!=0)
			{
				temp=temp->next;
			}
			temp->next=p;
			p->previous=temp;
		}
		void infoinput()
		{
				t accountno;
	            string name;
	            double amount;
		
			cout<<"enter your account no "<<endl;
			cin>>accountno;
			cout<<"enter your name"<<endl;
			cin>>name;
			cout<<"enter your amount "<<endl;
			cin>>amount;
		
			addrecord(accountno,name,amount);
			
		}
		void viewrecord()
		{
			cout<<"there are "<<counter<<"records"<<endl;
			node<t> *temp=head;
			while(temp!=0)
			{
				cout<<temp->accountno<<endl;
				cout<<temp->amount<<endl;
				cout<<temp->name<<endl;
				temp=temp->next;
			}
		}

	};
	int main()
	{
		cout<<"***Account Information System***"<<endl;
		LDLL<int>obj;
		obj.infoinput();
;
	}
	
