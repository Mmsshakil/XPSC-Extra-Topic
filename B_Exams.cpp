#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while (t--)
    {
        long double x, y, z;
        cin >> x >> y >> z;

        long double percentage = (z * 100) / (x * y);

        if (percentage > 50)
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