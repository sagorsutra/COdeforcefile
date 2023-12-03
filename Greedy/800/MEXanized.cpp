#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, mex, maximum, sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> mex;
        cin >> maximum;
        sum =0;
        
        if((mex - maximum)>1 || (n<mex))
        {
            cout<<"-1"<<endl;
            continue;
        }

        //determind the maximum
        if(mex == maximum){
            maximum--;
        }
        for (int i = 0; i < n; i++)
        {
            if(mex>i)
            {
                sum +=i;
            }
            else{
                sum +=maximum;
            }
        }

        cout<<sum<<endl;
        

         
    }
}


/*
for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        for (int i = 0; i < n; i++) // 0 -> 5
        {
            if (i == mex && mex != maximum)
            {
                vec[i] = maximum;
            }
            else if (i == mex && mex == maximum)
            {
                vec[i] == maximum--;
            }
            else if (i > maximum && mex== maximum)
            {
                vec[i] = maximum--;
            }

            vec[i] = i;
        }

        for (int i = 0; i < n; i++)
        {
            cout << vec[i] <<endl;
        }
*/