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
        int x, y;
        cin >> x >> y;
        int even = 0, odd = 0;
        for (int i = x; i <= y; i++)
        {
            if (i % x == 0 && i % 2 == 0)
            {

                even++;
            }
            else if (i % x == 0 && i % 2 != 0)
            {
                odd++;
            }
        }

        if (even >= odd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}