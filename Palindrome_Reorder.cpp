#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> mp;

    for (auto c : s)
    {
        mp[c]++;
    }

    int odd = 0;
    char oddChar = 0;
    for (auto [x, y] : mp)
    {
        if (y % 2 != 0)
        {
            odd++;
            oddChar = x;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string firstHalf = "";
    for (auto [x, y] : mp)
    {
        firstHalf = firstHalf + string(y / 2, x); // y koto gulo, x konta char
    }

    string res = firstHalf;
    if (oddChar)
    {
        res = res + string(mp[oddChar] % 2, oddChar); // middle char
    }

    reverse(firstHalf.begin(), firstHalf.end());
    res = res + firstHalf;

    cout << res << endl;

    return 0;
}