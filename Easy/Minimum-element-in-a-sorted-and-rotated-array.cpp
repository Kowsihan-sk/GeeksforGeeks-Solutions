#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000007
#define ll long long

int minElement(vector<int> v, int high, int low)
{
    if (high == low || v[low] < v[high])
        return v[0];

    int mid = (high + low) / 2;
    if (mid > low && v[mid] < v[mid - 1])
        return v[mid];
    if (mid < high && v[mid + 1] < v[mid])
        return v[mid + 1];

    if (v[mid] < v[high])
        return minElement(v, mid - 1, low);
    return minElement(v, high, mid + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int min = minElement(a, a.size() - 1, 0);
        cout << min << endl;
    }

    return 0;
}