#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// vector<pair<int,int>> groupformat(vector<int>& a)
// {
//     for (int  i = 0; i <a.size(); i++)
//     {
//         sort(a.begin(),a.end());
//         vector<pair<int,int>> pairs;
//         for (int i = 0; i <; i++)
//         {
//             /* code */
//         }
//     }
// }

int main()
{
     int t,n;
     cin>>t;

     while (t--)
     {
        cin>>n;
        vector<int> vec(n+n);
        for (int i = 0; i < 2*n; i++)
        {
            cin>>vec[i];
        }

        sort(vec.begin(),vec.end());
        vector<pair<int,int>> pair;

        for (int i = 0; i < n; i++)
        {
            pair.push_back(make_pair(vec[i],vec[2*n-i-1]));
        }
        
        int ans=0;
        for (int i = 1; i < n; i++)
        {
           ans+= abs(pair[i-1].first - pair[i].first);
           ans+= abs(pair[i-1].second - pair[i].second);
           
        }

        cout<<ans<<endl;
        
        for(auto it:pair){
            cout<<it.first <<" "<<it.second<<endl;
        }
        

        





     }
     

}