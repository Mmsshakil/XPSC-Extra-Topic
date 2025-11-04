#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<char> v;

    while (n--)
    {
        string s;
        cin >> s;

        int n = s.size();
        bool flag = true;
        
        for (int i = 0; i < n - 1; i++)
        {
            cout << s[i];
            if (s[i + 1] == s[i] && flag == true)
            {
                flag = false;
                if (s[i] == 'a')
                    cout << 'b';
                else
                    cout << 'a';
            }
        }

        cout << s[n - 1];
        
        if (flag == true)
        {
            if (s[n - 1] == 'a')
                cout << 'b';
            else
                cout << 'a';
        }
        cout << endl;
    }

    return 0;
}