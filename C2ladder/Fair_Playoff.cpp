#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
        int max1 = max(a,b);
        int min1 = min(a,b);
        int max2 = max(c,d);
        int min2 = min(c,d);
        
        if (min2>max1 || min1>max2)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        
       
    }
}