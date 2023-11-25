#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;

ll digit_sum(ll n) {
    ll total = 0;
    while (n) {
        total += n % 10;
        n /= 10;
    }
    return total;
}

void solve() {
    ll n;
    cin >> n;
    while (1) {
        if (__gcd(n, digit_sum(n)) > 1) {
            cout << n << "\n";
            return;
        }
        n++;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}



//  ----------> Mycode 

// #include <iostream>
// using namespace std;

// int digitSum(int n){
//     int digSum = 0, rem =0;
//     while(n>0)
//     {
//         rem = n%10;
//         digSum +=rem;
//         n = n/10;
//     }
//     return digSum;
// }

// int gcd(int a, int b)
// {
//     if(a==0){
//         return b;
//     }
//     else{
//         return gcd(b%a,a);
//     }
// }

// int main() {
   
//    int n,num=0;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         // cout<<"Enter the number : " ;
//         cin>>num;
        
//         int gSum = gcd(num,digitSum(num));
//         // cout<<gSum<<endl;

//         if (gSum>1)
//         {
//            cout<<num;
//         }
//         else{
//         while (gSum <= 1)
//         {
//             num++;
//             gSum = gcd(num,digitSum(num));
//         }
        
//            cout<<num<<endl;

//           }        
         
//     }
    
   
// }
