/*
    Author: Katari Vijay
    Institute: IIIT Vadodara
*/
#include <bits/stdc++.h>

using namespace std;
#define ll                  long long
vector<vector<ll>> a;
vector<ll> vec;
vector<ll> val;
void DFS(ll node,ll value){
    // vector<ll>vec(n+1,0);
    vec[node] =1;
    ll st=value;
    if(node==1)    st = value -1;
    else st = value - 2;
    // vector<vector<ll>> a;
    // a.assign(n+1,{});
    // vector<ll> val(n+1,1);
    for(auto it:a[node]){
        if(vec[it]==0){
            val[it] = st;DFS(it,value);st--;
        }
    }
}
void solution(){
    ll n,c;
    cin>>n>>c;
    // vector<vector<ll>>a(n+1,{});
    a.assign(n+1,{});
    // vector<ll>vec(n+1,0);
    vec.assign(n+1,0);
    // vector<ll>val(n+1,1);
    val.assign(n+1,0);
    val[1]=c;
    for(ll i=0;i<n-1;i++){
        ll u,v;cin>>u>>v;a[u].push_back(v);a[v].push_back(u);
    }
    for(ll i=0;i<n;i++){
        if(vec[i+1]==0) DFS(i+1,c);
    }
    ll res=1;
    for(ll i=0;i<n;i++){
        res=res*val[i+1];
        res= res% 1000000007;
    }
    cout<<res<<endl;
}
int main(){
    ll t=1;
    //i(t);
    while(t--)
    solution();
	return 0;
}
