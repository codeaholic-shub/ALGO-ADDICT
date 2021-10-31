#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		string a1,a2;
		cin>>a1>>a2;
		ll count=0;
		for(int i=0;i<n;i++){
			if(a1[i]=='1' && a2[i]=='1'){
				count++;
				break;
			}
		}
		if(count==0){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}