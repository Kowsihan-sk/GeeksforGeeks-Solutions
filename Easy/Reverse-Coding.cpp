#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        if ((n * (n + 1)) / 2 == m)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}