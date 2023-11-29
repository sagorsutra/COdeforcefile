 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> vec(n);

        // Input array elements
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());
        long long prod = 1;

        bool allNines = all_of(vec.begin(), vec.end(), [](int x) { return x == 9; });

        if (allNines)
        {
            vec[n - 1]++;
        }
        else
        { 
            vec[0]++;
        }  
        for (int i = 0; i < n; i++)
        {
            prod *= vec[i];
        }

        cout << prod << endl;
    }

    return 0;
}



/*  --> MyLogic

  #include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, n, sm = 0, mx = 0, prod = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        sm = vec[0]; // sm=0
        mx = vec[n - 1];
        prod = 1;
        for (int i = 0; i < n; i++)
        {
             
            if (sm == 9 && mx == 9)
            {
                vec[n - 1] = mx + 1;
            }
            else if (vec[i] == sm)
            {
                vec[i] = sm + 1;
            }
             
                prod = prod * vec[i];
        }

        cout << prod << endl;
    }
}*/