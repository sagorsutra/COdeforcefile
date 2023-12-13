#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,b, oddPossible = 0, evenPossible = 0, evenMin = INT_MAX, oddMin = INT_MAX;
        cin>>n;
        vector < int > v;
        for(int i = 0 ; i < n ; i++) {
            cin>>b;
            v.push_back(b);
            if(b%2==1)
                oddMin = min(oddMin, b); 
            else
                evenMin = min(evenMin, b);
        }
      
        for(int i = 0 ; i < n; i++) {
            if(v[i]%2 == 0)
                evenPossible++;
            else {
                if(v[i] > oddMin)
                    evenPossible++;
            }
        }
        //all odd case ?
        for(int i = 0 ; i < n; i++) {
            if(v[i]%2 != 0)
                oddPossible++;
            else {
                if(v[i] > oddMin)
                    oddPossible++;
            }
        }
        if(oddPossible == n or evenPossible == n)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;     
}


/*

sort(v.begin(), v.end());

        int first = v[0];
        if (first % 2 == 1)
        {
            p = 0;
        }
        else
        {
            p = 1;
        }

        vector<int> newV(n);
        newV[0] = first;
        ans = 1;

        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (p == 0)
                {
                    diff = abs(v[i] - v[j]);
                    if (v[i] % 2 == 1)
                    {
                        newV[i] = v[i];
                        ans = 0;
                        break;
                    }
                    else
                    {
                        if (diff % 2 == 1)
                        {
                            newV[i] = diff;
                            ans = 0;
                            cout << newV[i] << endl;
                            break;
                        }
                    }
                }
                else if (p == 1)
                {
                    diff = abs(v[i] - v[j]);
                    if (v[i] % 2 == 0)
                    {
                        newV[i] = v[i];
                        ans = 0;
                        break;
                    }
                    else
                    {
                        if (diff % 2 == 0)
                        {
                            newV[i] = diff;
                            ans = 0;
                            cout << newV[i] << endl;
                            break;
                        }
                    }
                }
            }
             
        }
        if (ans ==1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
*/