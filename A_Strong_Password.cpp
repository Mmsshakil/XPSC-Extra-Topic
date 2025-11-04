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
        string s;
        cin >> s;

        if (s.size() == 1)
        {
            cout << s << char(s + 1) << endl;
        }
    }

    return 0;
}