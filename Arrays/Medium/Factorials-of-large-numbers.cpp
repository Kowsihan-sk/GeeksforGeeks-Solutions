#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000
#define ll long long

vector<int> Factorial(vector<int> a, int n)
{
    a.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        for (int j = 0; j < a.size(); j++)
        {
            int mul = a[j] * i + carry;
            a[j] = mul % 10;
            carry = mul / 10;
        }
        while (carry)
        {
            a.push_back(carry % 10);
            carry /= 10;
        }
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(0);

        a = Factorial(a, n);
        for (int i = a.size() - 1; i >= 0; i--)
            cout << a[i];
        cout << endl;
    }

    return 0;
}