#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        v.push_back(s);
    }
    
    reverse(v.begin(), v.end());

    map<string, bool> mp;

    for (auto &it : v)
    {
        if (!mp[it])
        {
            cout << it << endl;
            mp[it] = true;
        }
    }

    return 0;
}