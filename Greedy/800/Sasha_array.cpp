#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, max = 0, min = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n/2; i++)
        {
            sum += v[n-i-1] - v[i];
        }
         
        cout << sum << endl;
    }
}