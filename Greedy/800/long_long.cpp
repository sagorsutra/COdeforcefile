#include<bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, s = 0, c = 0, flag=0, a[200000];
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            s += abs(a[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] < 0)
                flag = 1;
            else if (a[i] > 0)
            {
                c +=flag;
                flag=0;
            }
          
        }
       c=c+flag;
        cout << s << ' ' << c << endl;
    }
}