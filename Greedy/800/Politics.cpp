#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,n;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s[n];

        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }

        int ans =1;

        for (int i = 1; i < n; i++)
        {
            ans+=(s[i]==s[0]);
        }
        cout<<ans<<endl;
        
        
    }
}