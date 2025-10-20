#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> v; // vector in a vector
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> a;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        v.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}