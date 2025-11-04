#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;

    for (int i = 0; i < n - 1; i++)
    {
        // cout << s[i] << s[i + 1] << endl;
        string x = string(1, s[i]) + s[i + 1];
        // cout << x << endl;

        mp[x]++;
    }

    int mx = 0;
    string final;

    for (auto [x, y] : mp)
    {
        if (y > mx)
        {
            mx = y;
            final = x;
        }
    }

    cout << final << endl;

    return 0;
}