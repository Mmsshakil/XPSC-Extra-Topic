#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);

    for (long long int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (long long int i = 1; i <= n; i++)
    {
        if (v[i] != i)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}