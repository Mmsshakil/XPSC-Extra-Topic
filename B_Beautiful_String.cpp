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
        string s;
        cin >> s;

        int a, b;
        bool flag = true;

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
            {
                // cout << i + 1 << " " << j + 1 << endl;
                a = i + 1;
                b = j + 1;
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << b - a << endl;
            cout << a << " " << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}