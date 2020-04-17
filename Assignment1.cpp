#include <iostream>
#include <stack>
using namespace std;
int main(){
	//EFFICIENT APPROACH
    int arr[] = {3,4,2,7,5,8,10,6};
    int query[]={3,6,1};
    int n = sizeof(arr)/4; 
    int next[n]={0}; 
	stack<int> s; 
    s.push(0); 
    for (int i=1;i<n;i++){
        while (!s.empty()){ 
            int top=s.top();
            if (arr[top]<arr[i]) {
                next[top]=i;
                s.pop(); 
            }
            else
                break; 
        }
        s.push(i); 
    }
    while (!s.empty())  
    { 
        int top=s.top(); 
        next[top]=-1; 
        s.pop(); 
    }
    
	int q=sizeof(query)/4;
    
	for(int i=0;i<q;i++){
    int position = next[query[i]]; 
    if (position == -1){
        cout<<-1<<endl; 
	}
    	else{
        	cout<<arr[position];
        	cout<<endl;
    	}
	}
}
