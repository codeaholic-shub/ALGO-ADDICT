//This program is to calculate unique number from list of array using XOR Operator
#include<iostream>
using namespace std;
int main()
{
    int num[5];
    cout<<"Enter 5 number: "; 
    for(int i=0;i<5;i++)
    cin>>num[i];
    int a=num[0];
    for(int i=1;i<5;i++)
    {
        a=a^num[i];
    }
    cout<<"Unique no. in this set is: "<<a;
}