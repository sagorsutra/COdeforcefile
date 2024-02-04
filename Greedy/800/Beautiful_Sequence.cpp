#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, n,flag;
    cin >> t;                

    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n+1);
        flag =0;
    
        for (int i = 1; i <= n; i++)
        {
           cin>>v[i];
        }

        for (int i = 1; i <=n; i++)
        {
            if(v[i] <= i){
               flag =1;
               cout<<"YES"<<endl;
               break;
            }
        }

        if(flag!=1){
            cout<<"NO"<<endl;
        }    
    }
}
/*
*/