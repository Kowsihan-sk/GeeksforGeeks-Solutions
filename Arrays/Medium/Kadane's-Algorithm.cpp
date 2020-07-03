#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

int KadaneSum(int arr[], int n)
{
    int msf = INT_MIN, meh = 0;
    for (int i = 0; i < n; i++)
    {
        meh = max(arr[i], meh + arr[i]);
        if (meh > msf)
            msf = meh;
    }

    return msf;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int max = KadaneSum(a, sizeof(a) / sizeof(a[0]));
        cout << max << endl;
    }
    return 0;
}