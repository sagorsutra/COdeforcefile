#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int a, b, c, win, totalbtn,counta=0, countb=0;
        char turn, A, K, winner;
        cin >> a >> b >> c;

        if((a+(c%2)>b))
        {
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}
 

 /*
   --> My code took much time. Issues with time complexity.


  int a, b, c, win, totalbtn,counta=0, countb=0;
        char turn, A, K, winner;
        cin >> a >> b >> c;

        turn='A';

        if(c%2==0){
            turn = 'A';
        } 
        else{
            turn='B';
        }
        // we've completed the common button pressing,Now individual and 
        // see who stays at last after complete their own button press

        int total = a+b;
        int al=0;

        for (int  i = 0; i < total; i++)
        {
            if(turn=='B' && countb<b)
            {
                turn='A';
                countb++;
            }
            else if (turn=='A' && counta<a)
            {
                turn='B';
                counta++;
            }
        }

        if(turn=='B')
        {
            cout<<"First"<<endl;
        }
        else if(turn){
            cout<<"Second"<<endl;
        }
        
 */