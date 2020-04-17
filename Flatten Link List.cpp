#include <iostream>
using namespace std;
template <class T>
struct Node{
	T info;
	Node <T> *next;
	Node <T> *previous;
	Node <T> *child;

//DEFAULT NODE CONSTRUCTOR
	Node(){
		next=0;
		previous=0;
		child=0;
	}

//PARAMETRIZED NODE CONSTRUCTOR
	Node(T val){
		info=val;
		next=0;
		previous=0;
		child=0;
	}
};
template <class T>
class MLDLL{
	private:
		Node <T> *head;
		Node <T> *tail;
		public:

//MLDLL CONSTRUCTOR
			MLDLL(){
				head=0;
				tail=0;
			}
			
//add node
			void addNode(T val){
			    Node<T> *p=new Node <T>(val);
			
			    if(head==NULL){
			        head = p;
			        return ;
			    }
			
			    Node<T> *p1=head;
			    while(p1->next!=NULL){
			        p1=p1->next;
			    }
			    p1->next = p;
			    p->previous= p1;
			    tail=p1;
}

//add child
				void addChild(T key,T val){
				    Node<T> *temp=head;
					while(temp!=0){
						if(temp->info==key){
							Node<T> *p=new Node <T>(val);
							temp->child=p;
							break;
						}
						temp=temp->next;
					}
				}
				
//ADD NODE TO CHILD				
				void childAddNode(T key,T val){
					Node<T> *temp=head;
					Node<T> *ctemp=0;
					Node<T> *cctemp=0;
					while(temp!=0){
						if(temp->child!=0){
							ctemp=temp->child;
							while(ctemp!=0){
								if(ctemp->info==key){
									Node<T> *p=new Node <T>(val);
									ctemp->next=p;
									p->previous=ctemp;
									break;
								}
								else{
									if(ctemp->child!=0){
										cctemp=ctemp->child;
										while(cctemp!=0){
											if(cctemp->info==key){
												Node<T> *p=new Node <T>(val);
												cctemp->next=p;
												p->previous=cctemp;
												break;
											}
											cctemp=cctemp->next;
										}
									}
								}
								ctemp=ctemp->next;
							}
						}
						temp=temp->next;
					}
					
				}
				
//ADD CHILD TO CHILD				
				void addChildtoChild(T key, T val){
					Node<T> *temp=head;
					Node<T> *ctemp=0;
					Node<T> *cctemp=0;
					while(temp!=0){
						if(temp->child!=0){
							ctemp=temp->child;
							while(ctemp!=0){
								if(ctemp->info==key){
									Node<T> *p=new Node <T>(val);
									ctemp->child=p;
									break;
								}
								else{
									if(ctemp->child!=0){
										cctemp=ctemp->child;
										while(cctemp!=0){
											if(cctemp->info==key){
												Node<T> *p=new Node <T>(val);
												cctemp->child=p;
												break;
											}
										}
									}
								}
								ctemp=ctemp->next;
							}
						}
						temp=temp->next;
					}
				}
				
//FLATTENED DISPLAY			
			void Display(){
				Node <T>*temp=head;
					Node<T> *ctemp=0;
				while(temp!=0){
					cout<<temp->info<<endl;
					temp=temp->next;
				}
			}
//BEFORE FLATTENING DISPLAY
			void BeforeDisplay(){
				Node <T>*temp=head;
					Node<T> *ctemp=0;
					Node<T> *cctemp=0;
				while(temp!=0){
					cout<<temp->info<<endl;
					if(temp->child!=0){
						ctemp=temp->child;
							while(ctemp!=0){
								cout<<"Child:"<<ctemp->info<<endl;
									if(ctemp->child!=0){
										cctemp=ctemp->child;
										while(cctemp!=0){
											cout<<"Child of Child:"<<cctemp->info<<endl;
											cctemp=cctemp->next;
											}
										}
								ctemp=ctemp->next;
									}
								}
								temp=temp->next;		
							}
				}
			
//FLATTEN FUNCTION
			void FlattenList(){
				Node<T> *p, *phead, *phead1, *ptail, *ptail1, *pchild;
			    p = head;
			    while(p->next){
			        p=p->next;
			    }
			
			    phead=head;
			    ptail=p;
			
			    while(phead->next!=NULL){
			        if(phead->child!=NULL){
			            ptail->next=phead->child;
			            phead->child->previous=ptail;
			            while(ptail->next!=NULL){
			                ptail=ptail->next;
			            }
			        }
			        phead=phead->next;
			    }
			    return;
			}
};
int main(){
	MLDLL <int> l1;
	l1.addNode(20);
	l1.addNode(30);
	l1.addNode(40);
	l1.addChild(20,50);
	l1.addChild(30,60);
	l1.childAddNode(50,70);
	l1.childAddNode(70,80);
	l1.addChildtoChild(80,90);
	l1.childAddNode(90,100);
	cout<<"Before Flattening:"<<endl;
	l1.BeforeDisplay();
	cout<<"After Flattening:"<<endl;
	l1.FlattenList();
	l1.Display();
}
