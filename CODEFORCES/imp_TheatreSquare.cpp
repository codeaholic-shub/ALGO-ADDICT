#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll m, n, a;
    cin >> m >> n >> a;
    cout << fixed;
    cout << setprecision(0) << ceil(m * 1.0 / a) * ceil(n * 1.0 / a);
    return 0;
}