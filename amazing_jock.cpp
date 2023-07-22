#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1,s2,s3,s4; cin >> s1 >> s2 >> s3;
	s4 = s1+s2;
	sort(s3.begin(),s3.end());
	sort(s4.begin(),s4.end());
	if(s3==s4)
	{
		cout << "YES\n";
	}
	else 
	{
		cout << "NO\n";
	}
	return 0;
}