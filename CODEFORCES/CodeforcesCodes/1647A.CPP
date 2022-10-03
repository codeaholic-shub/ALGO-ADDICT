#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int type;
    if (n % 3 == 1)
        type = 1;
    else
        type = 2;
    int sum = 0;
    while (sum != n) {
        cout << type;
        sum += type;
        type = 3 - type;
    }
    cout << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--)
        solve();
}
