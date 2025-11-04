#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 3;
        cin >> n;

        map<string, vector<int>> mp;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        // for (auto [s, a] : mp)
        // {
        //     cout << s << ": ";
        //     for (int i = 0; i < a.size(); i++)
        //     {
        //         cout << a[i] << " ";
        //     }

        //     cout << endl;
        // }
        // cout << endl;

        vector<int> ans(m);
        for (auto [s, a] : mp)
        {
            if (a.size() == 1)
            {
                ans[a[0]] = ans[a[0]] + 3;
            }
            else if (a.size() == 2)
            {
                ans[a[0]] = ans[a[0]] + 1;
                ans[a[1]] = ans[a[1]] + 1;
            }
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}