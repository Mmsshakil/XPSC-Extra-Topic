#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> mp;

    // mp.insert({1, 20});
    // cout << mp[1] << endl;

    // mp[5] = 24;
    // cout << mp[5] << endl;

    mp[2] = 24;
    mp[5] = 52;
    mp[9] = 15;
    mp[3] = 7;

    // for (auto [key, val] : mp) // output way 1
    // {
    //     cout << key << " " << val << endl;
    // }

    // for (auto it : mp) // output way 2
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // auto it = mp.find(5);

    // if (it == mp.end())
    // {
    //     cout << "Value not found" << endl;
    // }
    // else
    // {
    //     cout << it->second << endl;
    // }

    // auto it = mp.lower_bound(6); // lower bound means greater or equal for 6 it will 9 15
    auto it = mp.upper_bound(6); // upper bound means greater only for 5 it will 9 15
    cout << it->first << " " << it->second << endl;

    return 0;
}