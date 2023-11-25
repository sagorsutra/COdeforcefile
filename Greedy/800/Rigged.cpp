#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,x,y,x1,y1;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>x1>>y1; // first one will be fixed because of that person is fixed
        for (int i = 1; i < n; i++)
        {
            cin>>x>>y;
            if(y>=y1 && x>=x1)
            {
                x1 =-1;
            }
        }
        cout<<x1 <<endl;
    }
    
}

/*

 int numofath;
        cin>>numofath;
         vector<pair<int,int>> ath;

        for (int i = 0; i < numofath; i++)
        {
            int first, second;
            cin>>first>>second;
            ath.push_back(make_pair(first,second));
        }
        

        int weight =0;

        //pair has been done. Now make the rigged in the competition.
        for (int i = 0; i<=numofath; i++)
        {
           if(ath[0].first>ath[i+1].first)
           {
              weight = ath[i+1].first +1;
              break;
           }
        }
        
        if(weight>0)
        {
          cout<<weight<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }*/