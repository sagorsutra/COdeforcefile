#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, newStr;
        cin >> str;

        str.erase(0, 1);
        int len = str.size();
        string p = str;
        reverse(p.begin(), p.end());
        if (str != p)
        {
            cout << len << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}