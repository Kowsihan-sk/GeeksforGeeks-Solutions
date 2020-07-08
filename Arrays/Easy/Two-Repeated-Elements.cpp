#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)
#define F first
#define S second
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
const int mod = 1e9 + 7;
const int N = 1e2 + 3;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int a[n + 2], b[n + 2] = {0};
        fo(i, n + 2)
                cin >>
            a[i];

        int first = 0, last = 0, flag = 1;
        fo(i, n + 2)
        {
            b[a[i] - 1]++;
            if (b[a[i] - 1] == 2 && flag)
            {
                first = a[i];
                flag = 0;
            }
            if (b[a[i] - 1] == 2)
                last = a[i];
        }
        cout << first << " " << last << endl;
    }
}