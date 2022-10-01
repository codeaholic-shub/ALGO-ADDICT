/*
https://www.codechef.com/LTIME111B/problems/ARREQU
August Lunchtime 2022 Div 2 Problem
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
    int n;
    cin>>n;
    map<int,int> m;
    int v=0,w;
    for(int i=1;i<=n;++i){
      cin>>w;
      //cout<<w<<endl;
      m[w]++;
    }
    for(auto i:m) 
      v=max(v,i.second);
      //cout<<v<<endl;
      if(v>(n+1)/2)puts("No");
    else puts("Yes");
  }
}
