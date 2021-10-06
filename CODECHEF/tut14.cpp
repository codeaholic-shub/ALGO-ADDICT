#include<iostream>
using namespace std;


// struct employee
// {
//     /* data */
//     int eID;
//     char favChar;
//     float salary;
// };

typedef struct employee
{
    /* data */
    int eID; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1<<endl;
    cout<<(m1==2);
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice; // you will get garbage value so use only one at a time in union
    
    // ep harry;
    // struct employee shubham;
    // harry.eID = 1;
    // harry.favChar = 'c';
    // harry.salary = 1200000;
    // cout<<"the value is "<<harry.eID<<endl;
    // cout<<"the value is "<<harry.favChar<<endl;
    // cout<<"the value is "<<harry.salary<<endl;


    return 0;
}