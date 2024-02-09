#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
            string s;
            cin>>s;
            int cont=0;
            vector<string> recmelody;

            for (int i = 0; i <n; i++)
            {
                string neWmeldy;
                neWmeldy += s[i];
                neWmeldy += s[i+1];
                bool contain = std::find(recmelody.begin(), recmelody.end(), neWmeldy) != recmelody.end();
                if(!contain){
                    recmelody.push_back(neWmeldy);
                    cont++;
                }
            }
            cont = cont-1;
            cout<<cont<<endl;
    }
}