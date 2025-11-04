#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int s = 0, d = 0, i = 1;
    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back();
        int mx = max(left, right);

        if (i % 2 != 0)
        {
            s = s + mx;
        }
        else
        {
            d = d + mx;
        }

        if (mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }

        i++;
    }

    cout << s << " " << d << endl;

    return 0;
}