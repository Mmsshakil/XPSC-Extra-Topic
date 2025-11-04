#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // priority_queue<int> pq; // non increasing

    priority_queue<int, vector<int>, greater<int>> pq; // non decreasing

    pq.push(7);
    pq.push(2);
    pq.push(5);
    pq.push(7);
    pq.push(1);
    pq.push(2);
    pq.push(6);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    if (pq.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}