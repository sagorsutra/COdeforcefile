#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    int l,r,x,y;
    cin >> t;
    while(t--){
        cin>>l>>r;
        x=l;
        y=2*l;
        if(y<=r) cout<<x<<" "<<y<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }

    return 0;
}
