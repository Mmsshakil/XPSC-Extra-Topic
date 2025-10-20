#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int under = 0;
    int find = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < x)
        {
            under++;
        }
        else if (v[i] == x)
        {
            find++;
        }
    }

    int final = x - under + find;
    cout << final << endl;
    // dst
    return 0;
}