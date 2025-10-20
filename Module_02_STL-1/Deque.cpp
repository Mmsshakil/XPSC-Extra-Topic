#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    dq.push_front(7);
    dq.push_front(6);
    dq.pop_front();

    for (auto val : dq)
    {
        cout << val << endl;
    }

    return 0;
}