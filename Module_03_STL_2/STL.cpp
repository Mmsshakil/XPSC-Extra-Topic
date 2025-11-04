#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, set<int>> mp;

    set<int> s1;
    s1.insert(4);
    s1.insert(1);
    s1.insert(6);

    set<int> s2;
    s2.insert(8);
    s2.insert(2);
    s2.insert(5);

    set<int> s3;
    s3.insert(9);
    s3.insert(3);
    s3.insert(6);

    mp[3] = s1; // map a int = 3 ar jonne akta set thakbe seta s1
    mp[5] = s2;
    mp[8] = s3;

    for (auto [x, y] : mp)
    {
        cout << x << " -> ";

        for (auto val : y) // here we print the set
        {
            cout << val << " ";
        }

        cout << endl;
    }

    // now we will print a map's lower bound's lower bound

    auto it = mp.lower_bound(4); // map's lower bound
    // cout << it->first << endl;

    auto it2 = it->second.lower_bound(1); // set's lower bound
    cout << *it2 << endl;

    return 0;
}