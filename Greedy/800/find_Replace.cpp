#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,flag;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        flag =1;

        for (int i = 0; i < n; i+=2)
        {
            for (int  j = 1; j < n; j+=2)
            {
                 
                if(s[i]==s[j] ){
                    flag=0;
                    // cout<<i<<" ";
                    // cout<<j<<" ";
                }   
            }
        }
        

        if(flag==0){
            cout<<"NO"<<endl;
        }
        else if (flag!=0)
        {
             cout<<"YES"<<endl;
        }
        
        
    }
}

