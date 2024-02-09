#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
         string s;
         cin>>s;
         string love ="codeforces";
         int cont=0;
         for (int i = 0; i < 10; i++)
         {
            if(love[i]!=s[i]){
                cont++;
            }
         }
         cout<<cont<<endl;
         
    }
}


/*

*/