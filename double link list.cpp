#include<iostream>
using namespace std;
template <class t>
struct node
{
    t info;
	node<t>*next;
	node<t>*previous;
	node()
	{
		next=0;
		previous=0;
	}
	node(t val)
	{
		info=val;
		next=0;
		previous=0;
	}	
};
template <class t>
class LDLL
{
	node<t>*head;
	public:
		LDLL()
		{
			head=0;
			previous=0;
		}
		void insertathead( t val)
		{
			node *p<t>= new node<t>(val);
			if(head==0)
			{
				head=p;
				return;
			}
			head->previous=p;
			p->next=head;
			head=p;
		}
		void insertattail( t val)
		{
			node *p<t>=new node<t>(val);
			if(head==0)
			{
				head=p;
				return;
			}
			node *temp<t>=new node;
			temp=head;
			while(temp->next!=0)
			{
				temp=temp->next=0;
			}
			temp->next=p;
			p->previous=temp;
		}
		void insertbefore(t key,t val)
		{
			if (head===0)
			{
				return;
			}
			if( head->info==key&&head->next==0)
			{
				insertathead(val);
			}
			
		}
}

