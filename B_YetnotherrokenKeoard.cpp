#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        vector<pair<int, char>> uper;
        vector<pair<int, char>> lower;

        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            // for upper case
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
            {
                uper.push_back({i, s[i]});
            }
            else if (s[i] == 'B' && !uper.empty())
            {
                uper.pop_back();
            }

            // for lower case
            else if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
            {
                lower.push_back({i, s[i]});
            }
            else if (s[i] == 'b' && !lower.empty())
            {

                lower.pop_back();
            }
        }

        vector<pair<int, char>> v1;

        for (auto [x, y] : uper)
        {
            v1.push_back({x, y});
        }
        for (auto [x, y] : lower)
        {
            v1.push_back({x, y});
        }

        sort(v1.begin(), v1.end());

        for (auto [x, y] : v1)
        {
            cout << y;
        }
        cout << endl;
    }

    return 0;
}