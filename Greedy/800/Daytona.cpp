#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>k;
        int count = 0;
        for (int i = 0; i <n; i++)
        {
            int val=0;
            cin>>val;
            if(val==k)
            {
                count++;
            }
        }

        if(count>=1){cout<<"yes"<<endl;}
        else{cout<<"No"<<endl;}
        
    }
    

}