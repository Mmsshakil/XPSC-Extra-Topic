#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }

        // Sort by a[i]
        sort(v.begin(), v.end());

        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            // assign largest b to smallest a
            b[v[i].second] = n - i;
        }

        for (auto x : b)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
