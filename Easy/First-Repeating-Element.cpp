#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[MAX + 1] = {0}, num = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ++b[a[i]];
        }

        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] >= 2)
            {
                num = i + 1;
                break;
            }
        }

        cout << num << endl;
    }
}