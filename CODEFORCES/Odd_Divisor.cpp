//problem link: https://codeforces.com/contest/1475/problem/A
//My submission link:https://codeforces.com/contest/1475/submission/175285164
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n&n-1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}