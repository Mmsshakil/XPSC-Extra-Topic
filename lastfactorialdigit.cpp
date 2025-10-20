#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int total = 1;
        for (int i = 1; i <= x; i++)
        {
            total = total * i;
        }

        cout << total % 10 << endl;
    }

    return 0;
}