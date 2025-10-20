#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<bool> v(26, false);

    for (char c : s)
    {
        v[c - 97] = true;
    }

    int flag = true;
    char c;

    for (int i = 0; i < 26; i++)
    {
        if (!v[i])
        {
            c = i + 97;
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "None" << endl;
    }
    else
    {
        cout << c << endl;
    }

    return 0;
}