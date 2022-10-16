#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pi;
typedef pair<long long,long long> pl;
typedef map<int,int> mi;
typedef map<long long,long long> ml;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for (int i = a; i <= b; i++)

//-----------Type solution here------------//

void solve(){
    int n;
    cin >> n;
    int out = 15;
    rep(i,0,15){
        rep(j,0,15){
            int z = (n+i)*pow(2,j);
            if(z%32768==0){
                if(i+j<out){
                    out = i+j;
                }
            }
        }
    }
    cout << out << " ";
}


//This code is written by -------!!addy!!-------//

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll t;
   cin >> t;
   while(t--){
       solve();
   }
}