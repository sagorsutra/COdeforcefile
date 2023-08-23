
// 

#include<iostream>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        char  arr[n];
        bool distract = false;

        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }

        vector<char> vecSave;

        for ( int c = 0; c < n; c++)
        {

          auto it = find(vecSave.begin(), vecSave.end(), arr[c]);

          if (it == vecSave.end())
          {
            vecSave.push_back(arr[c]);
          }
          else if (it != vecSave.end() &&  arr[c]!= vecSave.back())
          {
             distract = true;
             break;
          }

        }

        if(distract){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

}




// Other code

//#include <bits/stdc++.h>
// int t, i, j, k, f, n;
// std::string s;
// main()
// {
//     for (std::cin >> t; t--;)
//     {
//         std::cin >> n >> s, f = 0;
//         for (i = 0; i < n; i++)
//             for (j = i + 1; j < n; j++)
//                 for (k = i + 1; k < j; k++)
//                     if (s[i] == s[j] && s[i] != s[k])
//                         f = 1;
//         puts(f ? "NO" : "YES");
//     }
// }