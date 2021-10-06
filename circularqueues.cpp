#include<iostream>

using namespace std;

class CQNode{
public:
	
	int data;
	CQNode *next;
	CQNode(int d){
		data=d;
		next=NULL;
	}
};

class CQ{
public:
	CQNode *Front;
	CQ(){
		Front=NULL;
	}
	
	void Insert(int value){
		CQNode *cq= new CQNode(value);
		if(Front==NULL)
		{
			Front=cq;
			Front->next=Front;
		}
		else
		{
			CQNode *ptr=Front;
			
			
			for(ptr=Front;ptr->next!=Front;ptr=ptr->next)
			;
			ptr->next=cq;
			cq->next=Front;
		}
		
	}
	
	
	
	void Display(){
		CQNode *ptr=Front;
		if(Front==NULL){
			cout<<"\nEmpty Queues.\n";
			return;
		}
		for(ptr=Front;ptr->next!=Front;ptr=ptr->next)
		{
			cout<<ptr->data<<" ";
		}
		cout<<ptr->data;
		cout<<endl;
	}
};





int main()
{
	CQ q;
	
	q.Insert(4);
//	q.Insert(5);
	q.Display();
	return 0;
}
