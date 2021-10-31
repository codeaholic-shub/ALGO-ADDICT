// This program is used to calculate number of bit that needed to be changed to convert one number to another
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,count=0;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    int changedbit=num1^num2;   // changedbit is used to store number of bit that is different using property of XOR Operator
    while(changedbit>0)
    {
        changedbit=changedbit & (changedbit-1);
        count++;
    }
    cout<<"Number of bit needed to be changed is: "<<count;
}