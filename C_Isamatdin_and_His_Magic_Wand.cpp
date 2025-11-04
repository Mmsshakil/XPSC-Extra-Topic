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

        bool even = false;
        bool odd = false;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);

            if (x % 2 == 0)
            {
                even = true;
            }
            else
            {
                odd = true;
            }
        }

        if (even && odd)
        {
            sort(v.begin(), v.end());
        }

        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}