#include <bits/stdc++.h>
using namespace std;

string solution(int arr[], int n)
{
    int sum = 0;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        s.insert(sum);
        if (arr[i] == 0 || sum == 0)
            return "Yes";
    }
    if (s.size() != n)
        return "Yes";
    return "No";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << solution(arr, n) << endl;
    }
    return 0;
}