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
        int h, x, y;
        cin >> h >> x >> y;

        if (h <= y)
        {
            cout << 1 << endl;
        }
        else if (h > y)
        {
            int bakiHealth = h - y;

            if (bakiHealth % x == 0)
            {
                int final = bakiHealth / x + 1;
                cout << final << endl;
            }
            else
            {
                int final = bakiHealth / x + 2;
                cout << final << endl;
            }
        }
    }

    return 0;
}