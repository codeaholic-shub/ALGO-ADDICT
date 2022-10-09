#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, char> m, revm;
        set<char> st;
        for (char x = 'a'; x <= 'z'; x++)
        {
            m[x] = x;
            revm[x] = x;
            st.insert(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (m[s[i]] == s[i])
            {
                if (int(st.size()) == 1)
                {
                    m[s[i]] = *st.begin();
                    st.clear();
                }
                else
                {
                    vector<int> vis(26, false);
                    char p = s[i];
                    vis[p - 'a'] = true;
                    while (p != revm[p])
                    {
                        p = revm[p];
                        vis[p - 'a'] = true;
                    }
                    for (auto x : m)
                    {
                        if (x.first != x.second)
                        {
                            vis[x.second - 'a'] = true;
                        }
                    }
                    for (char x = 'a'; x <= 'z'; x++)
                    {
                        if (!vis[x - 'a'])
                        {
                            m[s[i]] = x;
                            revm[x] = s[i];
                            st.erase(x);
                            break;
                        }
                    }
                }
            }
            s[i] = m[s[i]];
        }
        cout << s << "\n";
    }

    return 0;
}