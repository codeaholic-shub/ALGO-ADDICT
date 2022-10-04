#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}
ll dp[21];
long long int fac(long long int n)
{
   if(n==1)return 1;
   if(dp[n]!=0) return dp[n];
   return dp[n] = n*fac(n-1);
}
long long int hp(long long int n)
{
    long long int res = 0;
    for (ll i=n; i>=1; i--)
    {
        // If i is a power of 2
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
int main()
{
    fast_io();
    ll t;
    cin>>t;
    vector<ll> v(21);
    for(int i=1;i<21;i++)
    v[i]=fac(i);
    while(t--)
    {
      long long int n,ctr=0;
      cin>>n;
      bool flag=false;
      long long int temp1,temp2;
      while(flag!=true )
      {
        if(n==1)
        {
          ctr++;
          flag=true;
          break;
        }
        temp1=hp(n);
        // cout<<"temp1"<<temp1<<endl;
        if(temp1==n)
        {
          ctr++;
          flag=true;
          break;
        }

        ll i=1;
        while(v[i]<=n)
        {
          i++;
        }
        temp2=v[i-1];
        if(temp2==n)
        {
          ctr++;
          flag=true;
          break;
        }
          if(temp1>temp2)
          n=n-temp1;
          else
          n=n-temp2;

          ctr++;

      }  
      cout<<ctr<<endl;
    }
    return 0;
}
//  long long int rem=1;
//     long long int i=1;
//   while(rem<=n) 
//   {
//     rem*=i;
//     i++;
//   }
//     return rem/--i;