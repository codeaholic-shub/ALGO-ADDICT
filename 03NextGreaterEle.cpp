#include <bits/stdc++.h>
using namespace std;

// void NextGreaterELe(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i + 1; j <= n; j++)
//         {
//             if (i == n - 1)
//             {
//                 cout << "-1"
//                      << " ";
//             }
//             else if (arr[i] < arr[j])
//             {
//                 cout << arr[j] << " ";
//                 break;
//             }
//             else if (j == n - 1)
//             {
//                 cout << "-1"
//                      << " ";
//             }
//         }
//     }
// }

int main(int argc, char const *argv[])
{
    int arr[] = {13, 16, 7, 6, 12, 3, 4, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v;
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    // for (int i = 0; i < n; i++) //Next Greatre Element to the left and do not need reverse function.
    {
        if (st.empty())
            v.push_back(-1);
        else if (st.size() > 0 && st.top() > arr[i])
            v.push_back(st.top());
        else if (st.size() > 0 && st.top() <= arr[i])
        {
            while (!st.empty() && st.top() <= arr[i])
                st.pop();
            if (st.empty())
                v.push_back(-1);
            else
                v.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
