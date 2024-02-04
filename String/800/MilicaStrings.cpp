#include<bits/stdc++.h>
using namespace std;

int main(){
    
	int t,n,k;
	cin>>t;
	for (int i = 0; i < t; i++)
	{
        cin>>n;
        cin>>k;
        string s;
        cin>>s;
        int b =0;
        for (int j = 0; j < s.size(); j++)
        {
            if(s[j]=='B'){
                b++;
            }
        }
        if(b == k){
            cout<<"0"<<endl;
        }
        else if (b<k)
        {
           int cunt=0;
           for (int m = 0; m<n; m++)
           {
                if(s[m]=='A')cunt++;
                if(cunt == k-b){
                    cout<<"1"<<endl;
                    cout<<m+1<<' '<<"B\n";
                    break;
                }
           }
        }
        else if (b>k)
        {
         int cunt=0;
           for (int m = 0; m<n; m++)
           {
                if(s[m]=='B')cunt++;
                if(cunt == b-k){
                    cout<<"1"<<endl;
                    cout<<m+1<<' '<<"A\n";
                    break;
                }
           }
        }    
    }
}