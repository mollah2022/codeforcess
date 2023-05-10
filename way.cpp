#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,l=0;
	cin >> x;
	while(x--)
	{
		string s1;
		cin >> s1;
         l=s1.size();
         if(l>10)
         {
             cout<<s1[0]<<l-2<<s1[l-1]<<endl;
         }
         else
         {
         	cout<<s1<<endl;
         }

	}
}