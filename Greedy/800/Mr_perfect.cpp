#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, time1 = 1e9, time2 = 1e9, time = 1e9;
        string s;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            cin >> s;
            // cont1 = 0, cont2 = 0;

            if (s == "01")
            {
                time1 = min(time1,m);
            }
            if (s == "10")
            {
                time2 = min(time2,m);
            }
            if (s == "11")
            {
               time = min(time,m);
            }
        }

        if (time != 1e9 || (time1!= 1e9 && time2!= 1e9))
            cout << min(time, time1 + time2) << "\n";
        else
            cout << "-1\n";
    }
}