#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> s;
    // in set value will be unique and asanding order

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it = s.begin();
    // it++;
    // it++;
    // it--;
    // cout << *it << endl;

    for (auto m : s)
    {
        cout << m << " ";
    }
    cout << endl;

    // auto it = s.find(4);
    // if (it != s.end())
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    // s.erase(4); // this function erase data from set

    // for (auto m : s)
    // {
    //     cout << m << " ";
    // }
    // cout << endl;

    // cout << s.count(99) << endl; // jodi set a oi value ta thake tahole 1 print kore na thakle 0

    int x;
    cin >> x;
    // auto it = s.lower_bound(x); // greater or equal
    auto it = s.upper_bound(x); // greater only
    cout << *it << endl;

    return 0;
}