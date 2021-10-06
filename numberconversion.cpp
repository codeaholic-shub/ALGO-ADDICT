#include<iostream>
#include<math.h>
using namespace std;
int con(int n);
int hund(int a);
int num(int a);
int tens(int a);
int teens(int a);
int illions(int a);
int main()
{
	int m;
	do
	{
	int n;
	cout<<"Enter the number:\n";
	
    cin>>n;
	
	if(n==0)
	{
		cout<<"Zero"<<endl<<endl;
	}
	else
	{
		
	    con(n);
		cout<<endl<<endl;	
	}
	cout<<endl<<"Enter 1 to continue and press any other number to terminate"<<endl<<endl;
	
	cin>>m;
	cout<<endl;
	}while(m==1);
	return 0;
}



int con(int n)
{
	int i, j, k, a, b, c, r;
	int count=0;
	
	a=n;
	while(a!=0)
	{
		a=a/10;
		count++;
		//cout<<count<<endl;
	}
	
	r=count%3;
    count=count-count%3;
	
	
	while(count>-1){
		if(r==0)
		{
			b=n/pow(10, count);
	        c=pow(10, count);
	        n=n%c;
	        hund(b);
	        //illions(count);
	        //cout<<count;
	        count=count-3;
	        r++;
		}
		else
		{
			b=n/pow(10, count);
	        c=pow(10, count);
	        n=n%c;
	        hund(b);
	        illions(count);
	        //cout<<count;
	         count=count-3;
	         r++;
		}
		
	
		
	}
	
	
	
	
}



int hund( int a)
{
	int m[3], n , o;
	for(n=0;n<3;n++)
	{
		o=a%10;
		a=a/10;
		m[n]=o;
	}
	if(m[2]==0)
	{
		//continue;
	}
	else
	{
		num (m[2]);
		cout<<"hundred ";
	}
	if(m[1]==1)
	{
		teens(m[0]);
	}
	else
	{
		tens(m[1]);
		num(m[0]);
	}
}



int num(int a)
{
	switch(a){
		case 1:
			cout<<"one ";break;
		case 2:
			cout<<"two ";break;
		case 3:
			cout<< "three ";break;
			
		case 4:
			cout<< "four ";break;
		case 5:
			cout<< "five ";break;
		case 6:
			cout<<"six ";break;
		case 7:
			cout<< "seven ";break;	
		case 8:
			cout<< "eight ";break;
		case 9:
			cout<< "nine ";break;
		case 0:
			cout<< " ";break;
	}
		
}




int tens(int a)
{
	switch(a){
		//case 1:
		//	cout<< "ten ";break;
		case 2:
			cout<< "twenty ";break;
		case 3:
			cout<< "thirty ";break;
		case 4:
			cout<< "fourty ";break;
		case 5:
			cout<< "fifty ";break;
		case 6:
			cout<< "sixty ";break;
		case 7:
			cout<< "seventy ";break;
		case 8:
			cout<< "eighty ";break;
		case 9:
			cout<< "ninty ";break;
		case 0:
		    cout<<"";
	}
}



int teens(int a)
{
	switch(a){
		case 0:
			cout<< "ten ";break;
		case 1:
			cout<< "eleven ";break;
		case 2:
			cout<< "twelve ";break;
		case 3:
			cout<< "thirteen ";break;
		case 4:
			cout<< "fourteen ";break;
		case 5:
			cout<< "fifteen ";break;
		case 6:
			cout<< "sixteen ";break;
		case 7:
			cout<< "seventeen ";break;
		case 8:
			cout<< "eighteen ";break;
		case 9:
			cout<< "nineteen ";break;
	}
}




int illions(int a)
{
	switch(a){
		case 0:
			break;
	    case 3:
			cout<< "thousand ";break;
		case 6:
			cout<<"millions "; break;
		case 9:
			cout<<"billions ";break;
		case 12:
		     cout<<"trillions "; break;
		default:
		    cout<<" illions";	
	
	
	}
	
	
	return 0;
	
}

