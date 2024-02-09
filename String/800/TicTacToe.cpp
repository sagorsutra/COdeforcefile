#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> a = {
    {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
void solve()
{
    string s;
    for (int i = 0; i < 3; i++)
    {
        string t;
        cin >> t;
        s += t;
    }
    for (auto i : a)
    {
        if (s[i[0]] == s[i[1]] && s[i[0]] == s[i[2]] && s[i[0]] != '.')
        {
            cout << s[i[0]] << endl;
            return;
        }
    }
    cout << "DRAW" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
         char c[3][3];
        for (int i = 0; i < 3; i++)
         {
            for (int j= 0; j < 3; j++)
            {
                cin>>c[i][j];
            }
         }

        int cont =0;

        for (int i = 0; i < 3; i++)
         {
            for (int j= 0; j < 3; j++)
            {
                if (c[i][j]==c[i][j])
                {
                    cont++;
                }

            }
         }



    }
}
*/
