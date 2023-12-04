
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        vector<int> v(n);
        vector<int> oddv;
        vector<int> evenv;
        vector<int> new_arr;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                oddv.push_back(v[i]);
            }
            else
            {
                evenv.push_back(v[i]);
            }
        }

        sort(evenv.begin(), evenv.end());
        sort(oddv.begin(), oddv.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                new_arr.push_back(evenv[even]);
                ++even;
            }
            else
            {
                new_arr.push_back(oddv[odd]);
                ++odd;
            }
        }

        if (is_sorted(new_arr.begin(), new_arr.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

/*

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back

void solve()
{
    ll n, m, i, j, k;
    cin >> n;
    vll v(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    vll odd, even;
    vll new_arr;

    for (i = 0; i < n; i++)
    {
    if (v[i]%2!=0)        //separating the values into two arrays.
            odd.pb(v[i]);
        else
            even.pb(v[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    ll odd_p = 0, even_p = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i]%2!=0)
        {
            new_arr.pb(odd[odd_p]);
            ++odd_p;
        }
        else
        {

            new_arr.pb(even[even_p]);
            ++even_p;
        }
    }
    if (is_sorted(new_arr.begin(), new_arr.end()))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}







#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   while (t--)
   {
        int n,min=0,count=0,sum=0;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            min=arr[i];
            for (int j = 1; j < n; j++)
            {
                if(min>arr[j])
                {
                    min = arr[j];
                }
            }

            sum = arr[i] + min;

            if(sum%2==0)
            {
                continue;
            }
            else{
                count++;
            }

            arr[i]=min;
            min=0;
        }




        if(count>=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


  }

}

*/