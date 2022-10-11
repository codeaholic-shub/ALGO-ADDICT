// PROBLEM A: IMMOBILE KNIGHT
//lINK:https://codeforces.com/contest/1739/problem/A

#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define c(x) cout<<x<<endl;
#define in(p) cin>>p;
using namespace std;

signed main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1||m==1){
            cout<<1<<" "<<1<<endl;
            
        }
        else if(n==2&&m==3||n==3&&m==2){
            cout<<2<<" "<<2<<endl;
        }
        else if(n==3&&m==3){
            cout<<2<<" "<<2<<endl;
        }
        else{
            cout<<1<<" "<<1<<endl;
        }
    }
	
	return 0;
}
