#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first = -1;
        int last = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && first == -1)
            {
                first = i;
            }
            else if (s[i] == '1' && first != -1)
            {
                last = i;
            }
        }

        // cout << first << " " << last << endl;

        int count = 0;
        for (int i = first; i <= last; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}