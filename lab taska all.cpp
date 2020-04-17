#include<iostream>
using namespace std;
struct node
{
   t info;
     node *next;
	
};
class LSLL
{
	node <t> *head;
	public:
		LSLL()
		{
			head=0;
		}
		LSLL(t val)
		{
			node<t> *p= new node <t>(val);
		}
  
void	insertattail(t val)
	   {
		if (head=0)
		{
			head=p;
			return;
			
		}
		node <t>*temp=head;
		while(temp!=0)
		{
			temp=temp->next;
		}
		temp->next=p;
	}
	void merge(LSLL obj1, LSLL obj2)
	{
		LSLL obj3;
		node<t> *temp=obj1.head;
		while(temp!=0)
		{
			obj3.insertattail(temp->info)
			temp=temp->next;
		}
		temp=obj2.head;
		while(temp!=0)
		{
			obj3.insertattail(temp->info);
			temp=temp->next;
		}
}
void sort()
{
	node <t> *temp=head;
	while (temp!=0)
	{
		node<t>*p=head;
		while(p!=0)
		{
			if (temp->info<=p->info)
			{
				obj3.insertattail(temp->info);
			}
			p=p->next;
		}
		temp=temp->next;
		
	}
}
void Duplicatenode
{
	node<t>*temp=head;
	while(temp!=0)
	{
		node<t>*p=temp->next;
		while(p!=0)
		{
			if(temp->info==p->info)
			{
				node<t>*hello=p;
				temp->next=p->next;
				delete hello;
				
			}
			p=p->next;
		}
		temp=temp->next;
	}
}
bool join (LSLL obj1,LSLL obj2)
{
	node <t> *temp=obj1.head;
	while (temp!=0)
	{
		temp=temp->next:
	}
	node<t>*p=obj2.head;
	while (p!=0)
	{
		if (temp==p)
		{
			return true;
		}
		p=p->next;
	}
}
	
};
int main()
{
	
}
