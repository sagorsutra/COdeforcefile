#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char arr[8][8];
        string ans = "";

        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                cin >> arr[j][k];
                if (arr[j][k] != '.')
                {
                    ans += arr[j][k];
                }
            }
        }
        cout << ans << endl;
    }
}