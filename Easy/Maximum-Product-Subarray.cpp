#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000007
#define ll long long

int MaxProductSubArray(vector<int> a, int n)
{
    int prev_max_product = a[0];
    int prev_min_product = a[0];
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {
        prev_min_product = min({prev_max_product * a[i], prev_min_product * a[i], a[i]});
        prev_max_product = max({prev_max_product * a[i], prev_min_product * a[i], a[i]});

        ans = max(ans, prev_max_product);
    }
    return ans;
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

        int maxProduct = MaxProductSubArray(a, n);
        cout << maxProduct << endl;
    }

    return 0;
}