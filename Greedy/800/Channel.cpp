#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, q, read = 0,f=0;
        cin >> n >> a >> q;
        string s;
        cin>>s;

        if (n == a)
        { // If all the are people initially active
            cout << "YES" << endl;
            continue;
        }
        read = a;
        for (int i = 0; i < q; i++)
            {
                if (s[i] == '+')
                {
                    read++;
                    a++;
                }
                else
                {
                    read--;
                    // un_read++;
                }
                if (read == n )
                {
                    f=1;
                    break;
                }
                
            }

            if(f==1)
            {
                cout<<"YES";
            }
            else{
                if (a>=n)
                {
                    cout<<"MAYBE";
                }
                else{
                    cout<<"NO";
                }
            }
        cout<<endl;
    }
    return 0;
}




/*

    int t;
    cin>>t;
    while(t--){;
        ll subs,online,notif,read = 0, f = 0;
        cin>>subs>>online>>notif;
        string s;
        cin>>s;
        if(subs == online) {
            cout<<"YES"<<endl;
            continue;
        }
        read = online;
        for(ll i = 0 ; i < notif ; i++) {
            if(s[i] == '+') {
                read++;
                online++;
            }
            else {
                read--;
            }
            if(read == subs) {
                f=1;
                break;
            }
        }
        if(f == 1) {
            cout<<"YES";
        }
        else {
            if(online >= subs) {
                cout<<"MAYBE";
            }
            else
                cout<<"NO";
        }
        cout<<endl;
    }       
    return 0;

*/

/*
if (a == n || a>n)
        {
            cout << "YES" << endl;
        }
        else if (read == n && a<n )
        {
            cout << "MAYBE" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


*/