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
        int n, q;
        cin >> n >> q;

        map<int, set<int>> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i); // key hbe value r set ar modhe thakbe index
        }

        // for (auto [x, y] : mp)
        // {
        //     cout << x << " -> ";
        //     for (auto m : y)
        //     {
        //         cout << m << " ";
        //     }
        //     cout << endl;
        // }

        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;

            if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end())) // jodi l,r exist e na kore tahole NO
            {
                cout << "NO" << endl;
            }
            else
            {
                int startingStationLeftmost, endingStationRightmost;
                startingStationLeftmost = *mp[l].begin();

                endingStationRightmost = *mp[r].rbegin(); // rbegin mane reverse

                // cout << startingStationLeftmost << " " << endingStationRightmost << endl;

                if (startingStationLeftmost < endingStationRightmost)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}