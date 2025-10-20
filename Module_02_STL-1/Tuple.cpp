#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // tuple<string, int, int> t = make_tuple("shakil", 75, 178682);
    tuple<string, int, int> t = {"shakil", 75, 178682};

    // print
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

    auto [name, roll, number] = t;
    cout << name << " " << roll << " " << number << endl;

    return 0;
}