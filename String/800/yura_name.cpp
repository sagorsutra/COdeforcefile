
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, cont = 0, b;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cont = 0;
        if (s[0] == '_')
            cont = 1;
        if (s.size() == 1 && s[0] == '^')
            cont = 1;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '_' && s[j + 1] != '^')
                cont++;
        }
        cout << cont << endl;
    }
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
         string s;
         cin>>s;
         int cont =0;
         if(s[0]!='^'){
                cont++;
            }
         for (int i = 0; i < s.size(); i++)
         {
           if (s[i]=='_' && s[i+1]=='_' )
            {
                cont++;
            }
            else if (s.size()==2)
            {
                if(s[i]=='_'){
                    cont++;
                }
            }
            else if (s.size()==1)
            {
                if(s[i]=='_'){
                    cont++;
                }
                else if (s[i]=='^')
                {
                    cont++;
                }

            }



            // else if (s[i]=='_')
            // {
            //     cont++;
            // }
            // else if (s[i]=='^')
            // {
            //     cont++;
            // }

         }
         cout<<cont<<endl;
    }
}
*/
