#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0,val;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>val;
            if(val==i+1)
            {
                sum++;
            }
        }
        cout<<(sum+1)/2<<endl;
        
    }
        
}

/*
    In my code i passed the first test case

     int n, move = 0, swapable = 0, val ;
        cin >> n;
        // vector<int> v(n);

        // for (int i = 1; i <= n; i++)
        // {
        //     cin >> v[i];
        // }

        for (int i = 1; i <= n; i++)
        {
            cin>>val;
            
            if (i == val)
            {
                swapable++;
            }

            if (swapable == 2)
            {
                move++;
                swapable = 0;
            }

            else if (swapable >= 1)
            {
                if (move >= 1)
                {
                    move++;
                    swapable = 0;
                }
            }
        }

        cout << move << endl;
    }

*/