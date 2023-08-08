#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		string s1; cin >> s1;
		int l = s1.size();
		int sum1=0,sum2=0;
		for(int i=0; i<l/2; i++)
		{
           sum1+=s1[i];
		}
		for(int i=l/2; i<l; i++)
		{
           sum2+=s1[i];
		}

		if(sum1 == sum2)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}