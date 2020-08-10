#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (ll i = 0; i < n; i++)
#define ll long long

void MergeWithoutExtraSpace(int a[], int b[], int n, int m) {
    // h shell sorting
    // when we will go to exchange then make condition to switch from a to b array

    int h = 1;
    while (h < (n + m)/3) h = 3 * h + 1;   // sequence 1, 4, 13, 40 ...

    while (h >= 1) {
        for (int i = h; i < (n + m); i++) {
            int temp;
            if (i < n)
                temp = a[i];
            else
                temp = b[i - n];

            int j;
            for (j = i; j >= h; j -= h) {
                // condition : a[j - h] > temp
                //  swap : a[j] = a[j - h]
                bool flagA = false, flagB = false;
                if (j >= n) flagA = true;
                if ((j - h) >= n) flagB = true;

                if (flagB) {
                    if (b[j - h - n] <= temp) break;
                    b[j - n] = b[j - h - n];
                }
                if (!flagA && !flagB) {
                    if (a[j - h] <= temp) break;
                    a[j] = a[j - h];
                }
                if (flagA && !flagB) {
                    if (a[j - h] <= temp) break;
                    b[j - n] = a[j - h];
                }
            }

            if (j < n)
                a[j] = temp;
            else
                b[j - n] = temp;
        }
        h /= 3;
    }
    return;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin>>n>>m;

        int a[n], b[m];
        fo(i, n) {
            cin>>a[i];
        }
        fo(i, m) {
            cin>>b[i];
        }

        MergeWithoutExtraSpace(a, b, n, m);
        fo(i, n) {
            cout<<a[i]<<" ";
        }
        fo(i, m) {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}