#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<string> players[3];
        map<string, int> mp;

        for (int i = 0; i < 3; i++)
        {
            players[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                cin >> players[i][j];
                mp[players[i][j]]++;
            }
        }

        int scores[3] = {0, 0, 0};

        for (int i = 0; i < 3; i++)
        {
            for (auto &word : players[i])
            {
                if (mp[word] == 1)
                    scores[i] += 3;
                else if (mp[word] == 2)
                    scores[i] += 1;
            }
        }

        cout << scores[0] << " " << scores[1] << " " << scores[2] << "\n";
    }

    return 0;
}