#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,k,ptime=0;
    string str;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>k;
        cin>>str;
        int count=0;
        for (int i = 0; i <n; i++)
        {
            if(str[i]=='B'){
                count++;
                i = i+k-1;
            }
        }
        
        cout<<count<<endl;
        
    }


    
}