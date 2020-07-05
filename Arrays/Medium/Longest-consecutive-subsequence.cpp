#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000007
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        vector<int> b(s.begin(), s.end());
        int meh = 1, msf = 1;
        for (int i = 1; i < b.size(); i++)
        {
            if (b[i] - b[i - 1] == 1)
                meh++;
            else
                meh = 1;
            if (meh > msf)
                msf = meh;
        }
        cout << msf << endl;
    }

    return 0;
}