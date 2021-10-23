// Coded By Vishal Mourya
#include<bits/stdc++.h>
#define ll long long int
#define vec vector<ll>
#define f(var,a,b) for(ll var = a ; var < b ; var++ )
#define fr(var,a,b) for(ll var = a ; var > b ; var-- )
#define fasthoja ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void merge( vector<ll> &v , ll l , ll mid , ll r ) {

    ll n1 = ( mid - l + 1 );
    ll n2 = ( r - mid );
    // temporary array to store the elements of the original array
    vector<ll> tmp_n1(n1);
    vector<ll> tmp_n2(n2);
    // copy first half of the array to tmp_n1
    f(i,0,n1) {
        tmp_n1[i] = v[l+i];
    }
    // copy second half of the array to tmp_n1
    f(i,0,n2) {
        tmp_n2[i] = v[mid+1+i];
    }

    ll i = 0 , j = 0 , k = l;
    // sortedly merge the two array
    while( i < n1 && j < n2 ) {
        if( tmp_n1[i] < tmp_n2[j] ) {
            v[k] = tmp_n1[i];
            i++; k++;
        }
        else {
            v[k] = tmp_n2[j];
            j++; k++;
        }
    }

    // copy remaining elements manually
    while( i < n1 ) {
        v[k] = tmp_n1[i];
        i++; k++;
    } 

    while( j < n2 ) {
        v[k] = tmp_n2[j];
        j++; k++;
    } 
}

void merge_sort( vector<ll> &v , ll l , ll r ) {

    if( l < r ) {
        // there is atleast 2 element in the array
        ll mid = ( l + r ) / 2;

        merge_sort(v,l,mid); // left half
        merge_sort( v , mid+1 , r ); // right half
        merge( v , l , mid , r ); // sortedly merge both the half
    }
}

int main(void){
    fasthoja;
    ll n; cin >> n;
    vector<ll> v(n); f(i,0,n) cin >> v[i];
    merge_sort( v , 0 , n-1 );

    f(i,0,n) cout << v[i] << " ";
    cout << "\n"; 
    return 0;
}