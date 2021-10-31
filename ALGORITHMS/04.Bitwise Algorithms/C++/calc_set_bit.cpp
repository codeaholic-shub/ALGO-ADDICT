//This is another method to calculate sit bit in any binary number

#include<iostream>
using namespace std;
int main()
{
    int num,count=0,original;
    cout<<"Enter the decimal number: ";
    cin>>num;
    original=num;
    while(num>0)
    {
        if(num&1 == 1)
        count++;
        num=num>>1;
    }
    cout<<"Number of set bit in "<<original<<" is: "<<count;
}