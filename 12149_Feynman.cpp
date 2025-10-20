#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {

        // cout << n << endl;

        int total = 0;

        for (int i = 1; i <= n; i++)
        {
            total = total + (i * i);
        }
        if (total)
        {
            cout << total << endl;
        }
    }

    return 0;
}