#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int a[n - 1], sum = (n * (n + 1)) / 2;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            sum -= a[i];
        }

        cout << sum << endl;
    }

    return 0;
}