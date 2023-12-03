#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,n;
    cin >> t;

    while (t--)
    {
        cin>>x>>y>>n;
        vector<int> vec(n);
        int cont =1;
        vec[0] = x;
        vec[n-1] =y;

        for (int i = n-2; i >=1; i--)   //---> start form n-2 and will end before or when it is 1;
        {
             vec[i] = vec[i+1]-cont;
             cont++;
        }

        if(vec[1]-vec[0] > vec[2]-vec[1])
        {
            for (int  i = 0; i < n; i++)
            {
                cout<<vec[i]<<" "<<endl;
            }
            
        }
         
         else{
            cout<<"-1"<<endl;
         }
        
        
    }
    

}