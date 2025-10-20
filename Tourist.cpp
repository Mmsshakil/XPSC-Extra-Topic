#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            int reslt = abs(a - x) + abs(b - y);

            if (reslt < min)
            {
                min = reslt;
            }
        }

        cout << min << endl;
    }

    return 0;
}