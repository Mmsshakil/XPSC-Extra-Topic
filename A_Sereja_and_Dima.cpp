#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = 0, last = n - 1;
    vector<int> v;

    while (first <= last)
    {
        if (arr[first] > arr[last])
        {
            // cout << arr[first] << endl;
            v.push_back(arr[first]);
            first++;
        }
        else
        {
            // cout << arr[last] << endl;
            v.push_back(arr[last]);
            last--;
        }
    }

    int s = 0, d = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            s = s + v[i];
        }
        else
        {
            d = d + v[i];
        }
    }

    cout << s << " " << d << endl;

    return 0;
}