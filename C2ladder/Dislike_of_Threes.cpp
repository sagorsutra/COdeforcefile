#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

typedef long long ll; // taking the 

int main(){
   
    vector<ll>v;
    v.push_back(1);
    v.push_back(2);

    for (int i = 3; i < 1e6; i++)
    {
        if (i%3==0 || i%10==3 ) //for identifying number contains 3 in the end;
        {
          continue;
        }
        else v.push_back(i);
    }

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }
    
    

     
    
}