#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long
#include <map>
#include <vector>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        ll n;
        cin >> n;
 
        ll arr[n];
 
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        ll min = *min_element(arr, arr + n);
 
        if (n == 1)
        {
            cout << "0\n";
        }
 
        else if (n > 1)
        {
 
            ll sum = 0;
            ll k = (2 * min) - 1;
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] / k == 0)
                {
                    sum += 0;
                }
 
                else if ((arr[i] / k) > 0 && arr[i] % k == 0)
                {
                    sum += (arr[i] / k) - 1;
                }
 
                else if ((arr[i] / k) > 0 && arr[i] % k != 0)
                {
                    sum += (arr[i] / k);
                }
            }
            cout << sum << "\n";
        }
    }
}
