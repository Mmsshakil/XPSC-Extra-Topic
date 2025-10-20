#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum1 = a + b;
    int sum2;

    if (a > b)
    {
        sum2 = a + a - 1;
    }
    else if (a < b)
    {
        sum2 = b + b - 1;
    }
    else if (a == b)
    {
        sum2 = a + b;
    }

    if (sum1 == sum2 || sum1 > sum2)
    {
        cout << sum1 << endl;
    }
    else if (sum1 < sum2)
    {
        cout << sum2 << endl;
    }

    return 0;
}
