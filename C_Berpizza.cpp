#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, coustomerNo = 1;
    cin >> t;

    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    vector<int> ans;

    for (int i = 0; i < t; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({coustomerNo, money});
            ms.insert({money, -coustomerNo});
            coustomerNo++;
        }
        else if (type == 2)
        {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            ans.push_back(pos);
            ms.erase({money, -pos});
            s.erase(s.begin());
        }
        else if (type == 3)
        {
            int pos = -ms.rbegin()->second;
            int money = ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos, money});
        }
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}