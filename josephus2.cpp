#include<iostream>

using namespace std;

class Node{
	public:
		int value;
		Node *next;
};

int main()
{
	int k, l;
	Node *p, *q;
	int i, count;
	cout<<"Enter k and l.";
	cin>>k>>l;
	p=q=new Node();
	p->value=1;
	for(i=2;i<=l;i++)
	{
		p->next=new Node();
		p=p->next;
		p->value=i;
		
	}
	p->next=q;
	for(count=k;count>1;count--)
	{
		for(i=0;i<l-1;i++)
		    p=p->next;
		p->next=p->next;
	}
	cout<<"last "<<p->value;
	return 0;
}
