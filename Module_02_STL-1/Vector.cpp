#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // vector<int> v;
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << endl;

    // v.pop_back();

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // cout << "front: " << v.front() << endl;
    // cout << "back: " << v.back() << endl;

    // v.clear();
    // cout << v.size() << endl;

    // vector<int> v(5, 9);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << endl;

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // for (auto value : v)
    // {
    //     cout << value << " ";
    // }

    // reverse(v.begin(), v.end());
    // // sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>());

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    auto mn = min_element(v.begin(), v.end());
    auto mx = max_element(v.begin(), v.end());

    cout << *mn << " " << *mx << endl;

    int maxElementPosition = mx - v.begin();
    cout << maxElementPosition << endl;

    return 0;
}