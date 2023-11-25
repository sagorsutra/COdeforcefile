#include<iostream>
#include<bits\stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long n;
        cin>>n;
        long cont=1, b;  // i took a vlaue for increment continuously.
        for (long i = 1; i <= n; i++)
        {
            cin>>b;
            if (b ==cont)
            {
                cont++;
            }
            cont++;
        }
        cout<<cont-1<<" "<<endl;      
    }
    
}