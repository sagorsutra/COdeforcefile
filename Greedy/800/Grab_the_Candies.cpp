 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,flag;
    cin >> t;
    while (t--)
    {
        int n,a;
        cin>>n;
        int mh=0,bc=0;

        for (int i = 0; i < n; i++)
        {
            cin>>a;
            if(a%2==0){
                mh+=a;
            }
            else{
                bc+=a;
            }
        }

        if(mh>bc){
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
        

    }
}