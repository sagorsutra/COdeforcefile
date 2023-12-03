 #include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while(t--)
    {
        cin>>a>>b>>c;
        
        double A = max(a,b);
        double B = min(a,b);
        int cont = 0;
        
        while(A>B)
        {
            cont++;
            double sub = A-B;
            if(sub>c)
            {
                A-= c;
                B+= c;
            }
            else{
                double sub2 = (A-B)/2;
                A-= sub2;
                B+= sub2;
            }
        }
        std::cout << cont << std::endl;
        
    }

}