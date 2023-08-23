#include<iostream>

using namespace std;
int main()
{
    int t,n;
    // cout<<"Enter the number of testcase";
    cin>>t; 
    int count =0;

    for (int i = 0; i < t; i++)
    {
        cin>> n;
        int sum =0;
        int count =0;
        int arrlength = n*2;
        int arr[arrlength];

        for (int  j = 0; j < arrlength; j++)
        {
            cin >> arr[j];
        }

        for (int p = 0; p < arrlength; p=p+2)
        {
            sum = arr[p] + arr[p+1];
        
            if (sum%2==0)
            {
                count++;
                 // cout<<"No";
            }
        }
        
        if(count >= 1){
            cout<<"No"<<endl;
        }
        else if (count ==0)
        {
            cout<<"Yes"<<endl;
        } 
    }
    
}

/*



    int main(n,m,x){
        for(scanf("%*d");~scanf("%d",&n);puts(n?"No":"Yes"))
        for(m=2*n;m--;n-=x%2)scanf("%d",&x);}
*/