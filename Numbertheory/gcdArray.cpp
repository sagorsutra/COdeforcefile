#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--)
    {
    int l,r,k;
    cin>>l>>r>>k;

    int ans =0;
    int x = (r-l+1);

    ans = x/2;

    if (l%2==1 && r%2==1) 
    {
        ans++;
    }
    
    if(l==r){
        if (l==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }

    else if (k>=ans){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    

    }
    

     
}


//-------> My code was wrong logic

/*

int t;
    cin >> t;
    while(t--){
       int l,r,x,y,k,n;

       cin>>l;
       cin>>r;
       cin>>k;
       n = r-l+1;
       int arr[n];
       int currentvalue = l;
    
    
    for (int i = 0; i < n; i++) { 
		arr[i] = l;
      	l++;
	} 

    for (int i = 0; i < n; i=i+2)
    {
        int val1 = arr[i];
        int val2 = arr[i+1];
        int mul = val1 * val2; 

        arr[i] = arr[i+2];
        arr[i+1] = mul;

        if (__gcd(arr[i],arr[i+1])>1)
        {
           cout<<"yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        



    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"   ";
    }
    
	 
       
    }

    return 0;
    
*/