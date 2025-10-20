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

        int total = n;

        for (int i = 1; i <= n - 1; i++)
        {

            if (i % 2 == 1)
            {
                total = total - (n - i); // odd -> left
            }
            else
            {
                total = total + (n - i); // even -> right
            }
        }

        cout << total << endl;
    }

    return 0;
}