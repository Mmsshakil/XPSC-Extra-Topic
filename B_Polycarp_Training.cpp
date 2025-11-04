#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    // for (auto it : ms)
    // {
    //     cout << it << endl;
    // }

    int check = 1, count = 0;

    while (check <= n)
    {
        auto it = ms.lower_bound(check);
        if (it != ms.end())
        {
            count++;
            ms.erase(it);
        }
        check++;
    }

    cout << count << endl;

    return 0;
}