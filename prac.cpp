#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;
        ll a[n];
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            arr[i] = a[i];
        }

        while (s--)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] > 0)
                {
                    arr[(i - 1) % n] += 1;
                    arr[(i + 1) % n] += 1;
                    if(i==0)
                    {
                        arr[n-1]+=1;
                    }
                }
            
            }
            copy(arr,arr+n,a);
        }

        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}