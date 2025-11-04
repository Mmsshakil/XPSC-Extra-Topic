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
        deque<int> dq1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            dq1.push_back(x);
        }

        deque<int> dq2;
        dq2.push_back(dq1.front());

        if (n > 1)
        {
            for (int i = 1; i < n; i++)
            {
                if (dq2.front() > dq1[i])
                {
                    dq2.push_front(dq1[i]);
                }
                else
                {
                    dq2.push_back(dq1[i]);
                }
            }
        }

        for (auto x : dq2)
        {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}