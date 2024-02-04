#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int cont=0;
		long n;
		cin>>n;
		string s;
		cin>>s;
		vector<long> arr(27);
		for (int i = 0; i < n; i++)
		{
			arr[s[i]-'A']++;
			if(arr[s[i]-'A']==(s[i]-'A'+1)){
				cont++;
			}
		}
		cout<<cont<<endl;
		
		 
	}
}
