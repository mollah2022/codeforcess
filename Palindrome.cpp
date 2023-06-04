#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;

	cin >> s1;
	string s2;
	s2=s1;
	reverse(s2.begin(),s2.end());
	if(s1==s2)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}