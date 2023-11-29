#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n,midP=0, midV=0,sum=0, val=0,ans =0;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    
    sort(vec.begin(),vec.end());
    int size =vec.size();
 
     for (int i = 0; i < n; i++)
    {
        sum = sum + vec[i];
    }
    int avg = round(sum*1.0/n);   //---> avg dis from each
     
     for (int i = 0; i < n; i++)
    {
         
         
        ans += ((avg - vec[i]) * (avg - vec[i])) ;
 
    }
    
    cout<<ans<<endl;











    // midP = floor(size/2); //-> 3
    // cout<<endl;
    // cout<<midP<<endl;

    // if(size%2==0)  //vector is even
    // {
    //     midV = ceil(static_cast<float>(vec[midP-1] + vec[midP]) / 2);
    // }
    // else{
    //     midV = vec[midP];
    // }
    // // cout<<midV<<endl;

    

}