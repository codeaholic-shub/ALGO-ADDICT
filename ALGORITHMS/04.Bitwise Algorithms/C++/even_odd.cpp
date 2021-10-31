#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num & 1==0)  // last bit of every even number is 0 and last bit of every odd number is 1
    cout<<"Number is Even";
    else
    cout<<"Number is Odd";
}