#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,pos=0,neg=0;
        cin>>n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]>0){pos++;}
            else{neg++;}
        }
        int ans=0;

        while (neg>pos)
        {
            pos++;
            neg--;
            ans++;
        }
        if(neg%2==1)
        {
            ans++;
        }
        

        cout<<ans<<endl;
    }
    
}