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

        int a_even = 0;
        int a_odd = 0;
        int b_even = 0;
        int b_odd = 0;

        string a;
        cin >> a;

        for (int i = 0; i < n; i++)
        {

            if (a[i] == '1' && i % 2 == 0)
            {
                a_even++;
            }
            else if (a[i] == '1' && i % 2 != 0)
            {
                a_odd++;
            }
        }

        string b;
        cin >> b;

        for (int i = 0; i < n; i++)
        {

            if (b[i] == '0' && i % 2 == 0)
            {
                b_even++;
            }
            else if (b[i] == '0' && i % 2 != 0)
            {
                b_odd++;
            }
        }

        // cout << "a: " << a_even << " " << a_odd << endl;
        // cout << "b: " << b_even << " " << b_odd << endl;

        if ((a_even <= b_odd) && (a_odd <= b_even))
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