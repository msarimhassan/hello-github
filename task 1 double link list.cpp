#include<iostream>
using namespace std;
struct node
{
	
};
class CDLL
{
	void insertattail(t val)
	{
	
	node <t> *p=new node t>(val);
	if(head=0)
	{
		head=p;
		p->next=head;
		p->previous=head;
		return;
	}
	node <t> *temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=p;
	p->previous=temp;
	p->next=head;
	head->previous=p;
}
};
int main()
