#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        float a, b;
        cin >> a >> b;
        // cout << a * b << endl;
        total = total + a * b;
    }

    cout << total << endl;

    return 0;
}