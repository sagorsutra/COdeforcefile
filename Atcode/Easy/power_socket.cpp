#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int a, b, p, cnt;

int main() {
    
    cin >> a >> b;
    p = 1;
    while(p < b) {
        p--;
        p += a;
        cnt++;
    }
    
    cout << cnt << endl;
    

}


///MY code

/*
int main()
{
    int  A,B,wire;
     
        cin>>A>>B;
         wire=0;
         int sum = 0;
        for (int i = 0; i < B; i++)
        { 
            sum =sum+A; 
            if(sum<=B)      //sum-0-> 1, sum-4->2,sum-8->3,sum-12->4
            {
                wire++;
                if(sum==B)
                {
                    break;
                }
                 // 4,8,12
            }
            else if (sum-B>=0 && sum>B)
            {
                wire++;
                break;
            }
            
        } 
        cout<<wire<<endl;
    
*/