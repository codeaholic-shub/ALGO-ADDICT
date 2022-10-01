/*
https://www.codechef.com/START53B/problems/RING_GAME
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
      ll T;
      cin>>T;
      while(T--){
      ll N; cin>>N;
      ll a[N+1];
      ll x=0,y=0,z=0;
      for(ll i=1;i<=N;++i){
          cin>>a[i];x+=a[i]==0;y+=a[i]==1;
      }
      for(ll i=1;i<=N;++i){
          if(i==1)z+=(a[1]==a[N]);
          else
          z+=a[i]==a[i-1];
      }
      z-=abs(x-y);
      cout<<(z%4==0?"Bob":"Alice")<<'\n';
  }
  return 0;
}
