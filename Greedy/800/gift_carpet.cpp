#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string newstr = "";
    while (t--)
    {
        int n, ln;
        cin >> n >> ln;
        vector<string> v(n);

        for (int i = 0; i < n; i++)
        {
            string str;
            cin>>str;
            v.push_back(str);
        }
        
        int cont =0;
        string nam = "vika";

        for (int i = 0; i < ln; i++)
        {
            for(auto temp:v)
            {
                if(temp[i]==nam[cont]){
                    cont++;
                    break;
                }
            }
            if(cont==4) break;
        }

        if(cont==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
         
    }
}

/*
    ---> My concept was different (bringing the vika word from among the name)
string str;
        newstr="";
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            
            for (int j = 0; j < ln; j++)
            {
                if (str[j] == 'v' || str[j] == 'i' || str[j] == 'k' || str[j] == 'a')
                {
                    if (newstr.find(str[j]) < newstr.length())
                    {
                        //cout<<newstr<<endl;
                        continue;
                    }
                    else
                    {
                        newstr = newstr + str[j];
                       // cout<<newstr<<endl;
                    }
                }
                //cout<<newstr<<endl;
            }

        }
        if (newstr == "vika")
        {
            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }


*/