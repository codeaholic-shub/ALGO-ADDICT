#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],sum1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
        double avg=sum1/(1.0*n);
        double sum2=avg*(n-2);
        double diff=sum1-sum2;
        map<double,ll>mp;
        ll cnt=0;
        for(int i=0;i<n;i++){
            if(mp[diff-a[i]]>0){
                cnt+=mp[diff-a[i]];
            }
            mp[a[i]]++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}