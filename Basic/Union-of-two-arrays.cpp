#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        int a[n + m];
        unordered_set<int> s;

        for (int i = 0; i < n + m; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        cout << s.size() << endl;
    }

    return 0;
}