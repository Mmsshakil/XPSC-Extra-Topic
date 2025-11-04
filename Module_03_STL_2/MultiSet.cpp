#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    multiset<int> ms;

    // multiset always keep sorted with duplicate also

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    for (auto it : ms)
    {
        cout << it << " ";
    }

    cout << endl;
    // // ms.erase(9); // it will erase all 9
    // for (auto it : ms)
    // {
    //     cout << it << " ";
    // }

    // O(logN)
    // cout << ms.count(2) << endl;

    // we can erase a value from multiple value
    // auto it = ms.find(9);
    // ms.erase(it);

    // for (auto it : ms)
    // {
    //     cout << it << " ";
    // }

    // uper bownd

    auto it = ms.upper_bound(19);
    if (it == ms.end())
    {
        cout << "END" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    return 0;
}