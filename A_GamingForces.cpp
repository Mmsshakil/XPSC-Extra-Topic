#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> v;
        int oneCount = 0;
        int bigCount = 0;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);

            if (x == 1)
            {
                oneCount++;
            }
            else
            {
                bigCount++;
            }
        }

        if (oneCount % 2 == 0)
        {
            int total = (oneCount / 2) + bigCount;
            cout << total << endl;
        }
        else
        {
            int total = (oneCount / 2) + bigCount + 1;
            cout << total << endl;
        }
    }
    //dstt

    return 0;
}