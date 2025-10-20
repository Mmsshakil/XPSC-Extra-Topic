#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int total = 0;

    if (n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        for (long long int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                total = total + (arr[i] - arr[i + 1]);
                arr[i + 1] = arr[i];
            }
        }

        cout << total << endl;
    }

    return 0;
}