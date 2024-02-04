#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int cont = 0;
        bool found = false;

        while (x.find(s) == std::string::npos)  //while substring isn't found
                                                // And loop must be use as its necessary time not more then.
        {
            x.append(x);
            cont++;

            if (x.length()>n*m)
            {
                break;
            }   
        }

        if (x.find(s) != std::string::npos)
        {
            cout << cont << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}

/*
for (int j = 0; j < n*m; j++)
        {
            if (x.find(s) != std::string::npos)
            {
                cout<<cont<<endl;
                found= true;
                break;
            }
            x.append(x);
            cont++;

        }
        if (found==false)
        {
            cout<<"-1"<<endl;
        }
*/