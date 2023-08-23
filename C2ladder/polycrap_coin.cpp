#include <iostream>
#include<cmath>
using namespace std;

int main() {
   
   int t;
   cin>> t;
   for (int  i = 0; i <t; i++)
   {
     int n, c1, c2,z,x;
     cin>>n;
     z = n/3;
     x = n%3;

     c1 = z;
     c2 = z;

     if (x == 1){
        c1++;
     }

     else if (x==2){
        c2++;
      }

        cout<<c1 <<" "<< c2;

   }
   return 0;
}
