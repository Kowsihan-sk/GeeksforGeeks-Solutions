#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000007
#define ll long long

int minimizeHeight(vector<int> a, int k)
{
    if (a.size() == 1)
        return 0;

    sort(a.begin(), a.end());
    if (k >= a[a.size() - 1] - a[0])
        return a[a.size() - 1] - a[0];

    int small = a[0] + k, big = a[a.size() - 1] - k;
    if (small > big)
        swap(small, big);

    for (int i = 1; i < a.size() - 1; i++)
    {
        int add = a[i] + k;
        int subtract = a[i] - k;

        if (subtract >= small || add <= big)
            continue;

        int diff1 = abs(subtract - small), diff2 = abs(add - big);
        if (diff1 < diff2)
            small = subtract;
        else
            big = add;
    }
    return big - small;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int minHeight = minimizeHeight(a, k);
        cout << minHeight << endl;
    }

    return 0;
}