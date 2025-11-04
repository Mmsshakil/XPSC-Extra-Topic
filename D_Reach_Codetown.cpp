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
        string s;
        cin >> s;

        vector<char> vowel = {'A', 'E', 'I', 'O', 'U'};
        vector<char> consonant = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M',
                                  'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};

        bool flag = true;

        vector<int> vowelPos = {1, 3, 5};
        for (auto i : vowelPos)
        {
            if (find(vowel.begin(), vowel.end(), s[i]) == vowel.end())
            {
                flag = false;
            }
        }

        vector<int> constPos = {0, 2, 4, 6, 7};
        for (auto i : constPos)
        {
            if (find(consonant.begin(), consonant.end(), s[i]) == consonant.end())
            {
                flag = false;
            }
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
