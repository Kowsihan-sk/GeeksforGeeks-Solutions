#include <bits/stdc++.h>
using namespace std;

void findMissingAndRepeating(int* miss, int* rep, vector<int> a, int n)
{
    int res = n;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
        res ^= a[i] ^ i;

    res ^= res & (res - 1);

    for (int i = 0; i < n;i++)
    {
        if (a[i] & res)
            x ^= a[i];
        else
            y ^= a[i];
    }

    for (int i = 1; i <= n;i++)
    {
        if (i & res)
            x ^= i;
        else
            y ^= i;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            *miss = y;
            *rep = x;
            return;
        }
    }

    *miss = x;
    *rep = y;
}

int main() {
    int T;
    cin>>T;

    while (T--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin>>a[i];

        int miss = 0, rep = 0;
        findMissingAndRepeating(&miss, &rep, a, n);
        cout<<rep<<" "<<miss<<endl;
    }
    return 0;
}