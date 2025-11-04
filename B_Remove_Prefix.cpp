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
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        map<int, int> mp;
        bool flag = true;
        int loc;

        for (int i = n - 1; i >= 0; i--)
        {
            int k = v[i];

            if (mp.find(k) != mp.end())
            {
                flag = false;
                loc = i;
                break;
            }
            mp[k]++;
        }

        if (!flag)
        {
            cout << loc + 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}