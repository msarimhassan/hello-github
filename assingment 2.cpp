#include<iostream>
using namespace std;
template <class t>
struct node
{
	t info;
	node *next;
	node *previous;
	node *child;
	 node ()
	 {
	 	next=0;
	 	previous=0;
	 	child=0;
	 }
	 node( t val)
	 {
	 	info=val;
	 	next=0;
	 	previous=0;
	 	child=0;
	 }
};
template <class t>
class LDLL
{
	node <t> *head;
	public:
	LDLL()
	{
		head=0;
	}
    void insertattail( t val)
	{
		node <t> *p= new node <t>(val);
		if(head==0)
		{
			head=p;
			return;
		}
		node <t> *temp=head;
		while (temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=p;
		p->previous=temp;
	}
	void Addchild(t key, t val)
	{
		node <t> *p=new node<t> (val);
		if(head=0)
		{
			cout<<"LINK LIST DOENT EXIST"<<endl;
			return ;
		}
		node <t> *temp=head;
		while (temp->next!=0)
		{
			if(temp->info==key)
			{
				temp->child=p;
			}
			temp=temp->next;
		}
	}
//	void addchildlist(t key, t val)
//	{
//		node <t> *p=new node<t>(val);
//		if(head==0)
//		{
//			cout<<"DOESNT EXIST"<<endl;
//		}
//		node <t>*temp=head;
//		while(temp!=0)
//		{
//			if(temp->info==key)
//			{
//				if(temp->child==0)
//				{
//					return;
//				}
//				node<t> *ctemp=head;
//				while(ctemp->child->next=0)
//				{
//					ctemp=ctemp->child->next;
//				}
//				ctemp->child->next=p;
//				p->previous=ctemp->child;
//			}
//			temp=temp->next;
//		}
//	}
//	void childtochild(t key,t val2, t val)
//	{
//		node <t> *p=new node <t>(val);
//		if(head==0)
//		{
//			cout<<"DOESNT EXIST"<<endl;
//			return;
//		}
//	    node<t> *temp=head;
//	    while(temp!=0)
//	    {
//	    	if(temp->info==key)
//	    	{ 
//	    	    node<t> *tempc=head;
//	    		if(temp->child==0)
//	    		{
//	    			cout<<"CHILD DOESNT EXISt"<<endl;
//	    			return;
//				}
//				while(tempc->child->next!=0)
//				{
//					if(tempc->child->info==val2)
//					{
//						tempc->child->child=p;
//					}
//					tempc=tempc->child->next;
//				}
//			}
//		temp=temp->next;
//		}
//	}
	void view()
	{
		node <t> *temp=head;
		while(temp!=0)
		{
			cout<<"value"<<temp->info<<endl;
//			if(temp->child->info!=0)
//			{
//			cout<<" mychild"<<temp->child->info<<endl;
//			}
			temp=temp->next;
		}
	}

};
int main()
{
	LDLL <int> obj;
	obj.insertattail(5);
	obj.insertattail(6);
	obj.insertattail(7);
	obj.Addchild(6,48);
	obj.view();
}
