#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    deque<char> dq;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            dq.pop_back();
        }
        else
        {
            dq.push_back(s[i]);
        }
    }

    for (auto x : dq)
    {
        cout << x;
    }

    return 0;
}