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
        int nfact = 1;

        for (int i = 1; i <= n; i++)
        {
            nfact = nfact * i;
        }

        int nrfact = 1;
        for (int i = 1; i <= (n - 2); i++)
        {
            nrfact = nrfact * i;
        }

        cout << nfact / nrfact << endl;
    }

    return 0;
}