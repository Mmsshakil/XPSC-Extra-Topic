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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int firstPos = -1, secondPos = -1;
        firstPos = s.find('B');
        secondPos = s.rfind('B');

        cout << secondPos - firstPos + 1 << endl;
    }

    return 0;
}