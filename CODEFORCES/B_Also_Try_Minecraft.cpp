/*-----------------CODED BY ROCKHOPPER130-----------------*/
#include <bits/stdc++.h>
#include <numeric>
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define int long long int
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j, k) FOR(i, j, k, 1)
#define RREP(i, j, k) RFOR(i, k, j, 1)
typedef std::pair<int, int> PII;
typedef std::vector<int> VI;
typedef std::vector<std::string> VS;
typedef std::vector<PII> VII;
typedef std::vector<VI> VVI;
typedef std::map<int,int> MPII;
typedef std::set<int> SETI;
typedef std::multiset<int> MSETI;
using namespace std;

///*------------------------FUNCTIONS-----------------------*///
int gcd(int a, int b) { 
if (b == 0) { 
return a; 
} 
return gcd(b, a % b); 
}
///*--------------------CODE BEGINS HERE--------------------*///

int32_t main() {
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin >> n >> m;
VI v(n);
REP(i,0,n){
    cin >> v[i];
}
int front[n];
int back[n];
REP(i,0,n){
    front[i]=0;
    back[i]=0;
}
REP(i,0,n){
    if(v[i]>v[i+1] && i!=n-1){
        front[i+1]=front[i]+v[i]-v[i+1];
    }
    else{
        front[i+1]=front[i];
    }
}
for(int i=0;i<n;i++){
    if(i==0){
        back[i]=0;
    }
    else if(v[n-i]>v[n-i-1]){
        back[i]=back[i-1]+v[n-i]-v[n-i-1];
    }
    else{
        back[i]=back[i-1];
    }
}

REP(i,0,m){
    int s,t;
    cin >> s >>t;
    if(s<t){
        cout << front[t-1]-front[s-1]<<endl;
    }
    else{
        cout << -back[n-s]+back[n-t]<<endl;
    }
}
return 0;
}





























































// #include <bits/stdc++.h>
// #include <numeric>
// #define INF (int)1e9
// #define EPS 1e-9
// #define PI 3.1415926535897932384626433832795
// #define MOD 1000000007
// // #define int long long int
// #define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
// #define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
// #define REP(i, j, k) FOR(i, j, k, 1)
// #define RREP(i, j, k) RFOR(i, k, j, 1)
// typedef std::pair<int, int> PII;
// typedef std::vector<int> VI;
// typedef std::vector<std::string> VS;
// typedef std::vector<PII> VII;
// typedef std::vector<VI> VVI;
// typedef std::map<int,int> MPII;
// typedef std::set<int> SETI;
// typedef std::multiset<int> MSETI;
// using namespace std;

// ///*------------------------FUNCTIONS-----------------------*///
// int gcd(int a, int b) { 
// if (b == 0) { 
// return a; 
// } 
// return gcd(b, a % b); 
// }
// ///*--------------------CODE BEGINS HERE--------------------*///

// int32_t main() {
// ios::sync_with_stdio(0);
// cin.tie(0);
// int n,m;
// cin >>n >> m;
// VI v;
// REP(i,0,n){
//     int x;
//     cin >> x;
//     v.push_back(x);
// }
// int dam[n][n];
// REP(i,0,n){
//     REP(j,0,n){
//         dam[i][j]=0;
//     }
// }

// int otpt=0;
// REP(i,1,n+1){
//     REP(j,1,n+1){
//         if(i<j){
//             otpt=0;
//             for(int k=i-1;k<=j-1;k++){
//                 if(v[k]>v[k+1] && k!=j-1){
//                     otpt=otpt+(v[k]-v[k+1]);
//                 }
//             }
//             dam[i-1][j-1]=otpt;
//         }
//         else{
//             otpt=0;
//             for(int k=i-1;k>=j-1;k--){
//                 if(v[k]>v[k-1] && k!=j-1){
//                     otpt+=v[k]-v[k-1];
//                     // cout<<v[k]<<" "<<v[k-1]<<"-----"<<i<<" "<<j<<" "<<otpt<<endl;
//                 }
//             }
//             dam[i-1][j-1]=otpt;
//         }
//     }
// }



// REP(i,0,m){
//     int s,t;
//     cin >> s >> t;
//     cout << dam[s-1][t-1]<<endl;
// }
// return 0;
// }