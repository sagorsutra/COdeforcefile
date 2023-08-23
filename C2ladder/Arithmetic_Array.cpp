#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int sum=0;
        cin>> n;
        int arr[n+2];
        for (int  j= 0; j< n; j++)
        {
            cin>>arr[j];
            sum+=arr[j];
        }
        if (sum==n)
        {
            cout<<0<<endl;
        }
        else if (sum<n)
        {
            cout<<1<<endl;
        }
        else{
            cout<<sum-n<<endl;
        }        
    }
}