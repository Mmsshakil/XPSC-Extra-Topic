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

        vector<int> alic(n);
        vector<int> bob(n);

        for (int i = 0; i < n; i++)
        {
            cin >> alic[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> bob[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int mx = max(alic[i], bob[i]);
            int mn = min(alic[i], bob[i]);

            if (mn * 2 >= mx)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}