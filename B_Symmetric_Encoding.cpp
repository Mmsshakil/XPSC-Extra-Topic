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

        vector<char> v1, v2, v3;
        // v1 orginal
        // v2 unique
        // v3 reverse

        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            v1.push_back(x);
        }

        v2 = v1;

        sort(v2.begin(), v2.end());

        // unique(v1.begin(), v1.end());
        v2.erase(unique(v2.begin(), v2.end()), v2.end());

        v3 = v2;
        reverse(v3.begin(), v3.end());
        map<char, char> mp;

        for (int i = 0; i < v3.size(); i++)
        {
            mp[v2[i]] = v3[i];
        }


        // very important part
        for (int i = 0; i < v1.size(); i++)
        {
            char ch = v1[i];
            if (mp.find(ch) != mp.end())
            {
                cout << mp[ch];
            }
        }

        cout << endl;
    }

    return 0;
}