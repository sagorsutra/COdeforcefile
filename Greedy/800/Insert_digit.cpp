#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, n;
    cin >> t;               // Here the problem work with the number character logic
                            //Usage of subString 

    while (t--)
    {
        int n, k,flag =1;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if(s[i]<c)
            {
                string ans = s.substr(0,i);
                ans+=c;
                ans+=s.substr(i);
                flag=0;
                cout<<ans<<endl;
                break;
            }
        }
        if(flag==1){
            string ans = s+c;
            cout<<ans<<endl;
        }
    }
}


    /*
    int n,k,num=0,cont=0;
            cin>>n>>k;
            vector<int> v(n);

            for (int i = 0; i < n; i++)
            {
                cin>>v[i];
            }

            if(n==1)
            {
                num = num + v[0];
                cout<<num<<endl;
                num = num *10;
            }
            else{
                for (int i = 0; i < n; i++)
            {
                if(v[i]<=k && cont==0){
                    if(k==0)
                    {
                        continue;
                    }
                    else{
                        num = num + k;
                    num= num*10;
                    cout<<num<<endl;
                    num = num + v[i];
                    num = num *10;
                    cout<<num<<endl;
                    cont++;
                    continue;
                    }

                }
                if(i==n-1)
                {
                    num = num + v[i];
                    break;
                }
                num = num + v[i];

                num = num *10;
            }
            }



            cout<<num<<endl;


    */