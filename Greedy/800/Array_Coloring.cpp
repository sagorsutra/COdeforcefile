#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, suma = 0, sumb = 0, mid = 0;
        cin >> n;
        mid = n / 2;
        for (int i = 0; i < n; i++)
        {
            if (i < mid)
            {
                cin >> a;
                suma += a;
            }
            else
            {
                cin >> b;
                sumb += b;
            }
        }

        if ((suma + sumb) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}