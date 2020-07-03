#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3, i;
        cin >> n1 >> n2 >> n3;
        int arr1[n1], arr2[n2], arr3[n3];
        for (i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < n2; i++)
        {
            cin >> arr2[i];
        }
        for (i = 0; i < n3; i++)
        {
            cin >> arr3[i];
        }
        sort(arr1, arr1 + n1);
        sort(arr2, arr2 + n2);
        sort(arr3, arr3 + n3);
        map<int, int> m;
        for (i = 0; i < n1; i++)
        {
            if (arr1[i] != arr1[i + 1])
                m[arr1[i]]++;
        }
        for (i = 0; i < n2; i++)
        {
            if (arr2[i] != arr2[i + 1])
                m[arr2[i]]++;
        }
        for (i = 0; i < n3; i++)
        {
            if (arr3[i] != arr3[i + 1])
                m[arr3[i]]++;
        }

        map<int, int>::iterator j;
        int flag = 0;
        for (j = m.begin(); j != m.end(); j++)
        {
            //cout<<j->first<<" "<<j->second<<"\n";
            if (j->second == 3)
            {
                cout << j->first << " ";
                flag = 1;
            }
        }
        if (flag == 0)
            cout << "-1";

        cout << endl;
    }
    return 0;
}